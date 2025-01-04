#include <bits/stdc++.h>
using namespace std;

void printPattern9(int r){
    for (int i = 0; i < r; i++)
    {
        // space
        for (int j = 0; j < r-i-1 ; j++)
        {
            cout << " ";
        }

        // star
        for (int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }

        // space
        for (int l = 0; l < r - i - 1; l++)
        {
            cout << " ";
        }
        
        cout << endl;
        
    }
    for (int i = 0; i < r; i++)
    {
        // space
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }

        // star
        for (int k = 0; k < 2*r-(2*i +1); k++)
        {
            cout << "*";
        }

        // space
        for (int l = 0; l < i; l++)
        {
            cout << " ";
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