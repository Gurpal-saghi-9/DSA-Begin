#include <bits/stdc++.h>
using namespace std;

void printPattern2(int r){
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    printPattern2(rows);

    return 0;
    
}