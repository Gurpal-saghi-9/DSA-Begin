#include <bits/stdc++.h>
using namespace std;

void printPattern9(int n){
//    for (int i = 1; i <= n; i++)
//    {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
        
//         for (int j = 1; j <= 2*(n-i); j++)
//         {
//             cout << " ";
//         }

//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//    }
   
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " " ;
        }
        for (int j = i; j >= 1 ; j--)
        {
            cout << j ;
        }
        cout << endl;
        space -= 2;   
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