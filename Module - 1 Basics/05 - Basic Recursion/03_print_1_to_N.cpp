#include <iostream>
using namespace std;

// -------------- Approach 1 -------------------

void func1(int i, int n) {
    // Base Condition.
    if (i > n) return;

    // Print the current number.
    cout << i << " ";

    // Function call to print the next integer.
    func1(i + 1, n);
}

// -------------- Approach 2 -------------------

void func2(int i, int n) {
    // Base Condition.
    if (i < 1) return;

    // Function call to print (n-1) integers.
    func2(i - 1, n);
    cout << i << " ";
}

int main() {
    // Here, let’s take the value of n to be 4.
    int n = 4;
    cout << "Approsch 1 output: ";
    func1(1, n);

    cout << endl;

    // Here, let’s take the value of num2 to be 4.
    int num2 = 4;
    cout << "Approsch 2 output: ";
    func2(num2, num2);
    return 0;
}