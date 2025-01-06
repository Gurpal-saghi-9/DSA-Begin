#include <bits/stdc++.h>
using namespace std;

void revNum(int n){
    int rev_num = 0;

    while (n > 0)
    {
        int last_dig = n % 10;
        rev_num = (rev_num*10) + last_dig;
        n = n/10;
    }
    cout << rev_num;
}

int main(){

    int n = 98767;
    revNum(n);
    
    return 0;
}