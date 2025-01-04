#include <bits/stdc++.h>
using namespace std;

void printPattern2(int r){
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < r; i++)
    {
        // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // As soon as stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        printPattern2(n);
    }

    return 0;
    
}