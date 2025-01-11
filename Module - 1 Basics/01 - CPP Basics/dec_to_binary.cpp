#include <iostream>
#include <vector>

void decimalToBinary(int n) {
    std::vector<int> binaryNum;

    while (n > 0) {
        binaryNum.push_back(n % 2);
        n = n / 2;
    }

    for (int i = binaryNum.size() - 1; i >= 0; i--)
        std::cout << binaryNum[i];
}

int main() {
    int n;
    std::cout << "Enter a decimal number: ";
    std::cin >> n;
    std::cout << "Binary representation: ";
    decimalToBinary(n);
    std::cout << std::endl;
    return 0;
}