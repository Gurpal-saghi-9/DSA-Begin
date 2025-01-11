#include <iostream>
#include <string>
#include <cmath>

int binaryToDecimal(const std::string &binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; ++i) {
        if (binary[length - i - 1] == '1') {
            decimal += std::pow(2, i);
        }
    }
    return decimal;
}

int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;
    int decimal = binaryToDecimal(binary);
    std::cout << "The decimal equivalent is: " << decimal << std::endl;
    return 0;
}