#include <bits/stdc++.h> 
using namespace std;

int maxx (int num1, int num2){
    if(num1 >= num2) return num1;
    else return num2;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2 ; // 5 , 6

    int minimum = min(num1,num2);

    cout << minimum << endl; // 5
    
    int miximum = maxx(num1,num2);

    cout << miximum << endl; // 6


    return 0;
}