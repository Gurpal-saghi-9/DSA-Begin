#include <bits/stdc++.h>
using namespace std;

void printPattern9(int r){
    // for (int i = 0; i < 2*r-1; i++)
    // {
    //     int stars = i;
    //     if (i > r) stars = 2*r-i;
    //     for (int j = 1; j <= stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    // Top half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
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