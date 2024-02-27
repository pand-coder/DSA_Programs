#include <iostream>
using namespace std;
class Collection {
    int *x;
    int n;
    int size;
public:
    Collection(int N) { //parameterized constructor to intialize attributes of class//
        n = N;
        x = new int[n];
        size = 0;
    }

    void insert_at_end(int num) {   //Element get's stored into the array and after store opertion the size of array getget's increased//
        if (size < n) {
            x[size++] = num;
        }
    }

    void traversal() {  // Moving through the elements of array//
        for (int i = 0; i < size; i++) {
            cout << x[i] << " ";
        }
        cout << endl;
    }

    void delete_at_end() {  // doing size-- removes the last element of the array//
        if (size > 0) {
            size--;
        }
    }

    void at_beginning(int num) {    //insert the element at beginning 
        if (size < n) {
            for (int i = size; i > 0; i--) {
                x[i] = x[i - 1];  // all the elements move from i-1 th position to ith position where moving from left towards right//
            }
            x[0] = num; //inserting the new element at the beginning of the array //
            size++;
        }
    }

  void delete_at_begin() {    //delete the element at beginning 
    if (size > 0) {
        for (int i = 0; i < size - 1; i++) {
            x[i] = x[i + 1];  // all the elements move from i+1 th position to ith position where moving from right towards left//
        }
        size--;
    }
}

    int select_d_element(int d) {
        if (d >= 0 && d < size) { 
            return x[d]; //d represent the index of an element in the array where the user will pass d value to return the element//
        }
        else {
            return -1;
        }
    }

    void replace_val_at_index(int v, int m) { 
        if (m >= 0 && m < size) {
            x[m] = v; // We are over writing the value at the mth index with a paritcular value v//
        }
        else {
            cout << "Error: Index out of bounds." << endl;
        }
    }

    void insertmultiple_values() {
        int val;
        for (int i = 0; i < n; i++) {
            cin >> val;  // user taking n-1 values to be passed into argument into insert at beginning fxn//
            at_beginning(val);
        }
    }

    void insert_a_value_kth(int k, int num) {
        if (k >= 0 && k < size) {
            for (int i = size - 1; i >= k; i--) { // traversing reverse till kth index//
                x[i + 1] = x[i]; // moving from ith index to i+1th index towards right //
            }
            x[k] = num; // element will be inserted into kth index and then size of the array will be increased so as to not lose any element //
            size++;
        }
        else {
            cout << "Index out of bounds Error" << endl;
        }
    }
    void delete_at_k(int k) {
        if (k >= 0 && k < size) {
            for (int i = k; i < size - 1; i++) { //traversing the array//
                x[i] = x[i + 1]; // moving from i+1 th index to ith index towards left //
            }
            size--; // decrementing and deleting the element in array 
        }
        else {
            cout << "Index out of bounds Error" << endl;
        }
    }

    int search_element(int element) {
        for (int i = 0; i < size; i++) {
            if (x[i] == element) { // searches the element throughout array and if it finds the element //
                return i;           // returns it's index//
            }
        }
        return -1;
    }

    int find_occurences(int ind[], int element) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (x[i] == element) {
                ind[count++] = i; // stroing the indexes of the array where the occurence of element has been matched with elements in the array //
            }
        }
        return count;
    }

    void insert_before_first_occurence(int p, int v) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (x[i] == v) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = size - 1; i >= index; i--) {
                x[i + 1] = x[i];
            }
            x[index] = p;
            size++;
        }
    }

    void delete_first_occurrence(int v) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (x[i] == v) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = index; i < size - 1; i++) {
                x[i] = x[i + 1];
            }
            size--;
        }
    }

    void insert_after_first_occurrence(int p, int v) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (x[i] == v) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = size - 1; i > index; i--) {
                x[i + 1] = x[i];
            }
            x[index + 1] = p;
            size++;
        }
    }

    void delete_after_first_occurrence(int v) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (x[i] == v) {
                index = i;
                break;
            }
        }
        if (index != -1 && index + 1 < size) {
            for (int i = index + 1; i < size - 1; i++) {
                x[i] = x[i + 1];
            }
            size--;
        }
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the collection: ";
    cin >> capacity;
    Collection coll(capacity);
    int choice;
    int num, num2, num3, num4, index, index2, k, k2, element, element2, p, v, v2, p2, v3, v4, count;
    int ind[100];
    do {
     cout << "\nEnter choice (1: Insert at end, \n";
    cout << "2: Delete at end, \n";
    cout << "3: Insert at beginning, \n";
    cout << "4: Delete at beginning, \n";
    cout << "5: Traverse, \n";
    cout << "6: Select at index, \n";
    cout << "7: Replace at index, \n";
    cout << "8: Insert multiple values, \n";
    cout << "9: Insert at kth index, \n";
    cout << "10: Delete at kth index, \n";
    cout << "11: Search element, \n";
    cout << "12: Find occurrences, \n";
    cout << "13: Insert before first occurrence, \n";
    cout << "14: Delete first occurrence, \n";
    cout << "15: Insert after first occurrence, \n";
    cout << "16: Delete after first occurrence, \n";
    cout << "17: Exit): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter number to insert at end: ";
                cin >> num;
                coll.insert_at_end(num);
                break;
            case 2:
                coll.delete_at_end();
                break;
            case 3:
                cout << "Enter number to insert at beginning: ";
                cin >> num2;
                coll.at_beginning(num2);
                break;
            case 4:
                coll.delete_at_begin();
                break;
            case 5:
                coll.traversal();
                break;
            case 6:
                cout << "Enter index to select: ";
                cin >> index;
                cout << "Value at index " << index << ": " << coll.select_d_element(index) << endl;
                break;
            case 7:
                cout << "Enter index to replace: ";
                cin >> index2;
                cout << "Enter value to replace with: ";
                cin >> num3;
                coll.replace_val_at_index(num3, index2);
                break;
            case 8:
                coll.insertmultiple_values();
                break;
            case 9:
                cout << "Enter index to insert at: ";
                cin >> k;
                cout << "Enter value to insert: ";
                cin >> num4;
                coll.insert_a_value_kth(k, num4);
                break;
            case 10:
                cout << "Enter index to delete at: ";
                cin >> k2;
                coll.delete_at_k(k2);
                break;
            case 11:
                cout << "Enter element to search: ";
                cin >> element;
                cout << "Element found at index: " << coll.search_element(element) << endl;
                break;
            case 12:
                cout << "Enter element to find occurrences: ";
                cin >> element2;
                count = coll.find_occurences(ind, element2);
                cout << "Number of occurrences: " << count << endl;
                cout << "Indexes of occurrences: ";
                for (int i = 0; i < count; i++) {
                    cout << ind[i] << " ";
                }
                cout << endl;
                break;
            case 13:
                cout << "Enter value to insert (p): ";
                cin >> p;
                cout << "Enter value to insert before (v): ";
                cin >> v;
                coll.insert_before_first_occurence(p, v);
                break;
            case 14:
                cout << "Enter value to delete first occurrence: ";
                cin >> v2;
                coll.delete_first_occurrence(v2);
                break;
            case 15:
                cout << "Enter value to insert (p): ";
                cin >> p2;
                cout << "Enter value to insert after (v): ";
                cin >> v3;
                coll.insert_after_first_occurrence(p2, v3);
                break;
            case 16:
                cout << "Enter value to delete after first occurrence: ";
                cin >> v4;
                coll.delete_after_first_occurrence(v4);
                break;
            case 17:
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 17);
    return 0;
}
