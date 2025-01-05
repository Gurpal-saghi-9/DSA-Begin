#include <bits/stdc++.h>
using namespace std;

void printPattern18(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i ; ch <= 'E'; ch++)        {
            cout << ch << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (char ch = ('A'+ n - 1)-i; ch <= ('A' + n - 1); ch++)        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
        int n;
        cin >> n;
        printPattern18(n);

    return 0;
    
}