#include <bits/stdc++.h>
using namespace std;

// Function 1: Dynamic Programming approach to generate Fibonacci series
void fibonacciDP(int n) {
    if (n == 0) {
        cout << "The Fibonacci Series up to " << n << "th term:\n" << 0 << endl;
    } else if (n == 1) {
        cout << "The Fibonacci Series up to " << n << "th term:\n" << 0 << " " << 1 << endl;
    } else {
        vector<int> fib(n + 1);
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << "The Fibonacci Series up to " << n << "th term:\n";
        for (int i = 0; i <= n; i++) {
            cout << fib[i] << " ";
        }
        cout << endl;
    }
}

// Function 2: Iterative approach to generate Fibonacci series
void fibonacciIterative(int n) {
    if (n == 0) {
        cout << "The Fibonacci Series up to " << n << "th term:\n" << 0 << endl;
    } else {
        int secondLast = 0, last = 1;
        cout << "The Fibonacci Series up to " << n << "th term:\n" << secondLast << " " << last << " ";
        for (int i = 2; i <= n; i++) {
            int current = secondLast + last;
            cout << current << " ";
            secondLast = last;
            last = current;
        }
        cout << endl;
    }
}

// Function 3: Recursive approach to find the Nth Fibonacci number
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    cout << "Enter the value of n: ";
    int n;
    cin >> n;

    cout << "Choose the method to calculate Fibonacci:" << endl;
    cout << "1. Dynamic Programming (Generate Series)" << endl;
    cout << "2. Iterative Approach (Generate Series)" << endl;
    cout << "3. Recursive Approach (Find Nth Term)" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            fibonacciDP(n);
            break;
        case 2:
            fibonacciIterative(n);
            break;
        case 3:
            cout << "The " << n << "th Fibonacci number is: " << fibonacciRecursive(n) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
