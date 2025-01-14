#include <iostream>
#include <algorithm> // For std::reverse
using namespace std;

// Function to print the array
void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Method 1: Reverse array using an auxiliary array
void reverseWithAuxArray(int arr[], int n) {
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        ans[n - i - 1] = arr[i];
    }
    printArray(ans, n);
}

// Method 2: Reverse array using two pointers
void reverseWithTwoPointers(int arr[], int n) {
    int p1 = 0, p2 = n - 1;
    while (p1 < p2) {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    printArray(arr, n);
}

// Method 3: Reverse array using recursion
void reverseWithRecursion(int arr[], int start, int end) {
    if (start < end) {
        swap(arr[start], arr[end]);
        reverseWithRecursion(arr, start + 1, end - 1);
    }
}

// Method 4: Reverse array using the library function
void reverseWithLibraryFunction(int arr[], int n) {
    reverse(arr, arr + n);
    printArray(arr, n);
}

// Function to sort the array
void sortArray(int arr[], int n) {
    sort(arr, arr + n);
    cout << "The array has been sorted:" << endl;
    printArray(arr, n);
}

// Main function
int main() {
    int n = 6;
    int arr[] = {20, 10, 12, 34, 54 ,67};

    cout << "The original array is:- ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // cout << "Do you want to sort the array before reversing? (1 for Yes, 0 for No): ";
    // int sortChoice;
    // cin >> sortChoice;

    // if (sortChoice == 1) {
    //     sortArray(arr, n);
    // }

    cout << "Choose a method to reverse the array:" << endl;
    cout << "1. Using Auxiliary Array" << endl;
    cout << "2. Using Two Pointers" << endl;
    cout << "3. Using Recursion" << endl;
    cout << "4. Using Library Function" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            reverseWithAuxArray(arr, n);
            break;
        case 2:
            reverseWithTwoPointers(arr, n);
            break;
        case 3:
            reverseWithRecursion(arr, 0, n - 1);
            printArray(arr, n);
            break;
        case 4:
            reverseWithLibraryFunction(arr, n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
