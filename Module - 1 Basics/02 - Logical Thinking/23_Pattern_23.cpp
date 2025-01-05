#include <bits/stdc++.h>
using namespace std;

void printPattern22(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n || j == 1 || i == j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        
        cout << endl;
    }
    
}

int main(){
        int n;
        cin >> n;
        printPattern22(n);

    return 0;
    
}