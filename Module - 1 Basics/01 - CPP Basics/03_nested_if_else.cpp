#include <bits/stdc++.h>
using namespace std;

/*
Take the age from the user and then decide acoringly
1. if age < 18,
    print -> not eligible for job
2. if age >= 18 <= 54,
    print -> eligible for job
3. if age >= 55 and age <= 57,
    print -> eligible for job, but retirement soon.
4. if age > 57
    print ->"retirement time"
*/

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // // if elif

    // if (age < 18)
    // {
    //     cout << "Not eligible for job" << endl ;
    // }
    // else if (age <= 54)
    // {
    //     cout << "Eligble for job" << endl;
    // }
    // else if (age <= 57)
    // {
    //     cout << "Eligible for job, but retirement soob." << endl;
    // }
    // else if (age > 57)
    // {
    //     cout << "Retirement time." << endl;
    // }
    
    // nested if else
    if (age < 18)
    {
        cout << "Not eligible for job" << endl ;
    }
    // >= 18
    else if (age <= 57)
    {
        cout << "Eligible for job";
        if (age >= 55)
        {
            cout << " but retirement soon" ;  
        }
    }
    else if (age > 57)
    {
        cout << "Retirement time." << endl;
    }
    
    
    return 0;
}