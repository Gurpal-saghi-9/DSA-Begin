#include <bits/stdc++.h>
using namespace std;

// write a program that takes an input of age 
// and prints you are adult or not
// >= 18, yes
// < 18, No

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age; // if 28 print body of if & if 17 print body of else

    if (age >= 18){
        cout << "You are an adult " << endl;
    }
    else if(age < 18){
        cout << "You are not an adult" << endl;
    }
    
    return 0;
}