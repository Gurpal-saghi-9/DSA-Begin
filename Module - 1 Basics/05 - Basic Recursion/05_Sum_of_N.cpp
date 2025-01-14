#include<bits/stdc++.h>
using namespace std;

// Iterative approach to calculate the sum of the first N natural numbers.
void solve_iterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "(Iterative) The sum of the first " << n << " numbers is: " << sum << endl;
}

// Formula-based approach to calculate the sum of the first N natural numbers.
void solve_formula(int n) {
    int sum = n * (n + 1) / 2;
    cout << "(Formula) The sum of the first " << n << " numbers is: " << sum << endl;
}

// Recursive approach using a helper function with parameters for sum accumulation.
void solve_recursive_helper(int i, int sum) {
    // Base case: when i becomes less than 1, print the sum.
    if (i < 1) {
        cout << "(Recursive Helper) The sum is: " << sum << endl;
        return;
    }
    // Recursive call by decrementing i and adding i to the sum.
    solve_recursive_helper(i - 1, sum + i);
}

// Recursive approach to calculate the sum of the first N natural numbers.
int solve_recursive_direct(int n) {
    // Base case: when n becomes 0, return 0.
    if (n == 0) {
        return 0;
    }
    // Recursive step: return current number + sum of remaining numbers.
    return n + solve_recursive_direct(n - 1);
}

int main() {
    int n1 = 5, n2 = 6, n3 = 3;

    // Call the iterative approach.
    solve_iterative(n1);
    solve_iterative(n2);

    // Call the formula-based approach.
    solve_formula(n1);
    solve_formula(n2);

    // Call the recursive helper approach.
    solve_recursive_helper(n3, 0);

    // Call the direct recursive approach and print the result.
    cout << "(Recursive Direct) The sum of the first " << n3 << " numbers is: " << solve_recursive_direct(n3) << endl;

    return 0;
}
