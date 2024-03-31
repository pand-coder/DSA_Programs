
#include <iostream>
#include <vector>
#include <functional>
#include <ctime>
#include "sort.h"
using namespace std;

class Tcp {
    int source_port;
    int dest_port;
    int flag;
    int sequence_number;

public:
    Tcp(int sp, int dp, int f, int seq) : source_port(sp), dest_port(dp), flag(f), sequence_number(seq) {}

    int getSourcePort() const { return source_port; }
    int getDestPort() const { return dest_port; }
    int getFlag() const { return flag; }
    int getSequenceNumber() const { return sequence_number; }
};

bool compareTcp(const Tcp& a, const Tcp& b) {
    return a.getSequenceNumber() < b.getSequenceNumber();
}

void printObjects(const vector<Tcp>& tcpObjects) {
    for (const auto& obj : tcpObjects) {
        cout << "Source Port: " << obj.getSourcePort()
             << ", Dest Port: " << obj.getDestPort()
             << ", Flag: " << obj.getFlag()
             << ", Sequence Number: " << obj.getSequenceNumber() << endl;
    }
}

int main() {
    int size;
    cout << "Enter the number of Tcp objects: ";
    cin >> size;

    vector<Tcp> tcpObjects;
    for (int i = 0; i < size; ++i) {
        int source_port, dest_port, f, seq_num;
        cout << "Enter source port, dest port, flag, sequence number for Tcp object " << i + 1 << ": ";
        cin >> source_port >> dest_port >> f >> seq_num;
        tcpObjects.emplace_back(source_port, dest_port, f, seq_num);
    }

    // Sort the objects based on sequence number using bubble sort
    Sort<Tcp>::bubbleSort(tcpObjects, [](const Tcp& a, const Tcp& b) {
        return compareTcp(a, b);
    });

    cout << "Sorted Tcp objects using bubble sort:" << endl;
    printObjects(tcpObjects);

    // Sort the objects based on sequence number using quick sort
    Sort<Tcp>::quickSort(tcpObjects, 0, tcpObjects.size() - 1);

    cout << "Sorted Tcp objects using quick sort:" << endl;
    printObjects(tcpObjects);

    // Sort the objects based on sequence number using merge sort
    Sort<Tcp>::mergeSort(tcpObjects, 0, tcpObjects.size() - 1);

    cout << "Sorted Tcp objects using merge sort:" << endl;
    printObjects(tcpObjects);

    // Shuffle the objects and then sort based on sequence number
    Sort<Tcp>::shuffleSort(tcpObjects, 0, tcpObjects.size() - 1);

    cout << "Sorted Tcp objects after shuffling using shuffle sort:" << endl;
    printObjects(tcpObjects);

    return 0;
}
