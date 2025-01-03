#include <bits/stdc++.h> 
using namespace std;

// Function are set of code which performs something for me
// Function are used to modularise code
// Function are used to increase readability
// Functions are ued to use same code multiple times

// void -> which does not return anything
void printame(){
    cout << "Gurpal Singh" << endl;
}




// parametersied 
void printName(string name){
    cout <<"Hello, " << name << endl;
}



int main(){
    // void func
    printame();

    // Parameterized
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);


    return 0;
}