#include <bits/stdc++.h> 
using namespace std;
/*
Take the day no and print the correponding day
for 1 print Monday
for 2 print Tuesday and so on for 7 print sunday
*/

int main(){
    int day;

    cout << "Enter a number of a day: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    
    default:
        cout << "Invalid  \n ";
        break;
    }
    
    cout << "check!";

    return 0;
}