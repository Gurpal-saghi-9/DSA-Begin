#include <bits/stdc++.h>
using namespace std;

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

int main(){
    int total_percentage;
    cout << "ENter your total percentage : ";
    cin >> total_percentage;

    // # 1st way

    // if (total_percentage >= 80)
    // {
    //     cout << "Grade 'A' " << endl;
    // }
    // else if (total_percentage >= 60)
    // {
    //     cout << "Grade 'B' " << endl;
    // }
    // else if (total_percentage >= 50)
    // {
    //     cout << "Grade 'C' " << endl;
    // }
    // else if (total_percentage >= 45)
    // {
    //     cout << "Grade 'D' " << endl;
    // }
    // else if (total_percentage >= 25)
    // {
    //     cout << "Grade 'E' " << endl;
    // }
    // else 
    // {
    //     cout << "Grade 'F' " << endl;
    // }

    // 2nd way

    if (total_percentage < 25)
    {
        cout << "Grade 'F' " << endl;
    }
    else if (total_percentage >= 25 && total_percentage <= 44)
    {
        cout << "Grade 'E' " << endl;
    }
    else if (total_percentage >= 45 && total_percentage <= 49)
    {
        cout << "Grade 'D' " << endl;
    }
    else if (total_percentage >= 50 && total_percentage <= 59)
    {
        cout << "Grade 'C' " << endl;
    }
    else if (total_percentage >= 60 && total_percentage <= 79)
    {
        cout << "Grade 'B' " << endl;
    }
    else if (total_percentage >= 80 && total_percentage <= 100)
    {
        cout << "Grade 'A' " << endl;
    }
   
   // 3rd way
   
    if (total_percentage < 25)
    {
        cout << "Grade 'F' " << endl;
    }
    else if (total_percentage <= 44)
    {
        cout << "Grade 'E' " << endl;
    }
    else if (total_percentage <= 49)
    {
        cout << "Grade 'D' " << endl;
    }
    else if (total_percentage <= 59)
    {
        cout << "Grade 'C' " << endl;
    }
    else if (total_percentage <= 79)
    {
        cout << "Grade 'B' " << endl;
    }
    else if (total_percentage <= 100)
    {
        cout << "Grade 'A' " << endl;
    }
    
    
    return 0;
}