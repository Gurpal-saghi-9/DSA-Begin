#include <bits/stdc++.h> 
using namespace std;

//Take two numbers and print its sum


// int add(int x, int y){
//     int sum = x + y;
//     return sum;
// }

void add(int x, int y){
    int sum = x + y;
    cout<< sum;
}

int main(){
    int num1, num2, sum;

    cin >> num1 >> num2 ;
    sum = num1 + num2;

    // int res = add(num1, num2);
    // cout << res << endl;

    add(num1, num2);


    return 0;
}