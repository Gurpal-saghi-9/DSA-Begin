#include <iostream>
using namespace std;

// Iterative approach to calculate factorial
int factorial_iterative(int X) {
    int ans = 1;
    for (int i = 1; i <= X; i++) {
        ans = ans * i;
    }
    return ans;
}

// Recursive approach to calculate factorial
int factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    int X1 = 5, X2 = 3;

    // Iterative factorial
    int result_iterative = factorial_iterative(X1);
    cout << "(Iterative) The factorial of " << X1 << " is " << result_iterative << endl;

    // Recursive factorial
    int result_recursive = factorial_recursive(X2);
    cout << "(Recursive) The factorial of " << X2 << " is " << result_recursive << endl;

    return 0;
}