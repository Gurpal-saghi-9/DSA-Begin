#include <bits/stdc++.h>
using namespace std;

void printPattern4(int r){
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
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
        printPattern4(n);
    }

    return 0;
    
}