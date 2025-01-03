#include <bits/stdc++.h> 
using namespace std;

// array always go with reference
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl; // 105
    
}

int main(){
    // int arr[5] = {10,12,3,7,10};
    // cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << arr[3];

    int n = 5;
    int arr[n];
    //usig for loop geting input from the user for array list
    for (int i = 0; i < n; i++)
    {
        cout << "The value of index " << i <<": " ;
        cin >> arr[i]; 

        // arr[0] => 5
        // arr[1] => 10
        // arr[2] => 7
        // arr[3] => 12
        // arr[4] => 13

    }
    
    for (int i = 0; i <= 4 ; i++)
    {
        cout << arr[i] << " ";
    }

    doSomething(arr,n);
    cout << "Value inside int main(5): " << arr[0] << endl; // 105    

    return 0;
}