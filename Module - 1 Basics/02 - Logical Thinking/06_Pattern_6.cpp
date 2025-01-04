#include <bits/stdc++.h>
using namespace std;

void printPattern3(int r){
    for (int i = 0; i < r; i++)
    {
        for (int j = r; j > i; j--)
        {
            cout <<"* ";
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
        printPattern3(n);
    }

    return 0;
    
}