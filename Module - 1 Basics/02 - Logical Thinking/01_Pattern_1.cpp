#include <bits/stdc++.h>
using namespace std;

void printPattern1(int r){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << "* ";
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
        printPattern1(n);
    }

    return 0;
    
}