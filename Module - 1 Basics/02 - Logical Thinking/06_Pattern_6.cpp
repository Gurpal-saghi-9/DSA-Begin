#include <bits/stdc++.h>
using namespace std;

void printPattern6(int r){
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r-i+1; j++)
        {
            cout << j <<" ";
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
        printPattern6(n);
    }

    return 0;
    
}