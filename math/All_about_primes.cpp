#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    else if(n==2 || n==3)
    {
        return true;
    }
    else if(n%2==0 || n%3==0)
    {
        return false;
    }
  else
  {
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
}
    return true;
}

void primeFactors(int n) {
    for (int i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            cout << i << endl;
            n = n / i;
        }
    }
    if (n > 1) {
        cout << n << endl;
    }
}

int main() {
    int n;
    cin >> n;
    bool check = isPrime(n);
    cout << (check ? "true" : "false") << endl;
    cout << "Prime divisors of " << n << " are:" << endl;
    primeFactors(n);

    return 0;
}
