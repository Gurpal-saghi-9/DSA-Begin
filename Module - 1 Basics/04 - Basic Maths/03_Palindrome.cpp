#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int rev_num = 0, dup = n;

    while (n > 0)
    {
        int last_dig = n % 10;
        rev_num = (rev_num*10) + last_dig;
        n = n/10;
    }
    if (rev_num == dup)
    {
        return true ;
    }
    else{
        return false;
    }
}

int main(){
    int n = 131;
    int is_palindrome = palindrome(n);

    if (is_palindrome){
        cout << "Palindrome number";
    }
    else{
        cout << "Not an Palindrome number";
    }
    return 0;
}