#include <iostream>

int countDividingDigits(int n) {
    int original = n;
    int count = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && original % digit == 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int result = countDividingDigits(n);
    std::cout << "Number of digits in " << n << " that divide it evenly: " << result << std::endl;

    return 0;
}