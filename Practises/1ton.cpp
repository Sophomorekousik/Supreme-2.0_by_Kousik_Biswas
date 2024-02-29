#include <iostream>

using namespace std;

void printCounting(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Counting from 1 to " << n << ":" << endl;
        printCounting(n);
    }

    return 0;
}
