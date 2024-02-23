#include<iostream>
using namespace std;
class Collection {
    int *x;
    int n;
    int size;
public:
    Collection(int N) {
        n = N;
        x = new int[n];
        size = 0;
    }
    bool store(int num) {
        if (size < n) {
            x[size++] = num;
            return true;
        } else {
            return false;
        }
    }
    void at_beginning(int num) {
        if (size < n) {
            for (int i = size; i > 0; i--) {
                x[i] = x[i - 1];
            }
            x[0] = num;
            size++;
        }
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the collection: ";
    cin >> capacity;
    Collection coll(capacity);
    int choice;
    do {
        cout << "\nEnter choice (1: store, 2: Add at Beginning , 0: exit): ";
        cin >> choice;
        switch (choice) {
            case 1:
                int num;
                cout << "Enter number to store: ";
                cin >> num;
                coll.store(num);
                break;
            case 2:
                int num2;
                cout << "Enter number to add at the beginning: ";
                cin >> num2;
                coll.at_beginning(num2);
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 0);
    return 0;
}
