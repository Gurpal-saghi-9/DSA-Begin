#include <bits/stdc++.h> 
using namespace std;

// pass by value 
// void doSomthing(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;

// }

// pass by reference
void doSomthing(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;

}

int main(){
    int num = 10;

    // pass by value
    // doSomthing(num);
    // cout<< num << endl; // 10

    // pass by reference 
    doSomthing(num);
    cout<< num << endl; // 20


    return 0;
}