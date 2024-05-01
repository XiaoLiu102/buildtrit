#include <iostream>
#include <vector>

using namespace std;

vector<int> toTernary(int n) {
    vector<int> ternary;
    if (n == 0) {
        ternary.push_back(0);
    }
    else {
        while (n > 0) {
            int remainder = n % 3;
            ternary.insert(ternary.begin(), remainder);
            n /= 3;
        }
    }
    return ternary;
}

vector<int> binaryToTernary(const vector<int>& binary) {
    int decimal = 0;
    for (int bit : binary) {
        decimal = decimal * 2 + bit;
    }
    return toTernary(decimal);
}

void printList(const vector<int>& list) {
    for (int num : list) {
        cout << num;
    }
}

int main() {
    int decimal = 10;
    vector<int> ternaryDecimal = toTernary(decimal);
    cout << "Ternary from " << decimal << " is: ";
    printList(ternaryDecimal);
    cout << endl;
    vector<int> binary = { 1, 0, 1 };

    vector<int> ternaryBinary = binaryToTernary(binary);
    cout << "Ternary from binary ";
    printList(binary);
    cout << " is: ";
    printList(ternaryBinary);

    return 0;
}