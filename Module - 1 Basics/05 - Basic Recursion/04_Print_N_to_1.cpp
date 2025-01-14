// -----------------  Problem: Print from N to 1 using Recursion  -----------------

#include <bits/stdc++.h>
using namespace std;

// ----------- Approach 1: Using Recursion -----------

void func1(int i, int n) {
    // Base Condition.
    if (i < 1) return;
    cout << i << " ";

    // Function call to print i till i decrements to 1.
    func1(i - 1, n);
}

// -------------- Approach 2: Using Recursion --------------

void func2(int i, int n) {
    // Base Condition.
    if (i > n) return;

    // Function call to print (i+1) integers.
    func2(i + 1, n);
    cout << i << " ";
}

int main() {
    // Here, let’s take the value of n to be 4.
    int n = 4;
    cout << "Approach 1 output: " ;
    func1(n, n);

    cout << endl;

    cout << "Approach 2 output: " ;
    func2(1, n);

    return 0;
}