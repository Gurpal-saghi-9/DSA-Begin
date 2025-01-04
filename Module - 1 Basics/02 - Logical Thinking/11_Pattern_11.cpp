#include <bits/stdc++.h>
using namespace std;

void printPattern9(int n){
    // int start = 1;
    // for (int i = 0; i < n; i++) {
    //     if (i % 2 == 0) start = 1;
    //     else start = 0;
    //     for (int j = 0; j <= i ; j++)
    //     {
    //         cout << start << " ";
    //         start = 1 - start; 
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++) {
        int start = (i % 2 != 0) ? 1 : 0; // Determine the starting value
        for (int j = 1; j <= i; j++) {
            cout << start << " ";  // Print the current value
            start = 1 - start;     // Toggle between 1 and 0
        }
        cout << endl; // Move to the next row
    }
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        printPattern9(n);
    }

    return 0;
    
}