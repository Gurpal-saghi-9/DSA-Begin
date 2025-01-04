#include <bits/stdc++.h>
using namespace std;

void printPattern3(int r){
    // This is the outer loop which will loop for the rows.
    for (int i = 1; i <= r; i++)
    {
        // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
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