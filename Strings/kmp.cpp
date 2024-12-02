#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to compute the prefix array
vector<int> computePrefix(string pattern) {
    int m = pattern.size();
    vector<int> prefix(m, 0);
    int j = 0;

    for (int i = 1; i < m; i++) {
        if (pattern[i] == pattern[j]) {
            j++;
            prefix[i] = j;
        } else {
            if (j != 0) {
                j = prefix[j - 1];
                i--; // Stay at the same index
            } else {
                prefix[i] = 0;
            }
        }
    }
    return prefix;
}

// KMP search function to find all occurrences of the pattern
vector<int> KMP(string txt, string pat) {
    vector<int> result;
    int n = txt.size();
    int m = pat.size();
    vector<int> prefix = computePrefix(pat);

    int i = 0, j = 0; // i for text, j for pattern
    while (i < n) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
        }
        if (j == m) {
            result.push_back(i - j); // Found match
            j = prefix[j - 1]; // Continue searching
        } else if (i < n && txt[i] != pat[j]) {
            if (j != 0) {
                j = prefix[j - 1];
            } else {
                i++;
            }
        }
    }
    return result;
}


