#include<iostream>
using namespace std;

void printBinary(int num, int numBits) {
    for(int i = numBits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        cout << bit;
    }
}

int main() {
    int num, numBits;
    cout << "Enter a negative integer: ";
    cin >> num;
    cout << "Enter the number of bits to use for representation: ";
    cin >> numBits;

    cout << "Binary representation: ";
    printBinary(num, numBits);

    return 0;
}