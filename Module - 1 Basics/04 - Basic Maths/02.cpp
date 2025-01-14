// ----------------------------- First Approch ----------------------------------------

// #include <iostream>
// #include <climits>

// class Solution {
// public:
//     int reverse(int x) {
//         int reversed = 0;

//         while (x != 0) {
//             int digit = x % 10; // Get the last digit
//             x /= 10;           // Remove the last digit

//             // Check for overflow/underflow
//             if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
//                 return 0;
//             }

//             reversed = reversed * 10 + digit; // Build the reversed number
//         }

//         return reversed;
//     }
// };

// // Example usage
// int main() {
//     Solution solution;

//     // Test cases
//     std::cout << solution.reverse(123) << std::endl;   // Output: 321
//     std::cout << solution.reverse(-123) << std::endl;  // Output: -321
//     std::cout << solution.reverse(120) << std::endl;   // Output: 21
//     std::cout << solution.reverse(1534236469) << std::endl; // Output: 0 (Overflow case)

//     return 0;
// }

// ----------------------------- Second Approch ----------------------------------------


#include <iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x != 0) {
            int digit = x % 10; // Get the last digit
            x /= 10;           // Remove the last digit

            // Check for overflow/underflow
            if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
                return 0;
            }

            reversed = reversed * 10 + digit; // Build the reversed number
        }

        return reversed;
    }
};

// Example usage
int main() {
    Solution solution;

    // Test cases
    std::cout << solution.reverse(123) << std::endl;   // Output: 321
    std::cout << solution.reverse(-123) << std::endl;  // Output: -321
    std::cout << solution.reverse(120) << std::endl;   // Output: 21
    std::cout << solution.reverse(1534236469) << std::endl; // Output: 0 (Overflow case)

    return 0;
}
