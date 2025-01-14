#include <bits/stdc++.h>
using namespace std;

// Function 1: Iterative approach to check if a string is a palindrome
bool isPalindromeIterative(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (!isalnum(s[left])) 
            left++;
        else if (!isalnum(s[right])) 
            right--;
        else if (tolower(s[left]) != tolower(s[right])) 
            return false;
        else {
            left++;
            right--;
        }
    }
    return true;
}

// Function 2: Recursive approach to check if a string is a palindrome
bool isPalindromeRecursive(int i, string& s) {
    // Base condition: If `i` reaches or exceeds half the string's length, it is a palindrome
    if (i >= s.length() / 2) return true;
    
    // Check if the characters at the start and end are the same
    if (s[i] != s[s.length() - i - 1]) return false;

    // Recursive call with the next indices
    return isPalindromeRecursive(i + 1, s);
}

int main() {
    string str;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Remove non-alphanumeric characters and convert to lowercase for recursion
    string processedStr;
    for (char c : str) {
        if (isalnum(c)) {
            processedStr += tolower(c);
        }
    }

    // Choice for the user to select the method
    cout << "Choose the method to check palindrome:" << endl;
    cout << "1. Iterative" << endl;
    cout << "2. Recursive" << endl;
    int choice;
    cin >> choice;

    // Checking palindrome based on user choice
    bool result;
    if (choice == 1) {
        result = isPalindromeIterative(str);
    } else if (choice == 2) {
        result = isPalindromeRecursive(0, processedStr);
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    // Output the result
    if (result) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
