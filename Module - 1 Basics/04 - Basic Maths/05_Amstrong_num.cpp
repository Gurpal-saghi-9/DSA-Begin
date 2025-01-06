#include <bits/stdc++.h>
using namespace std;

bool amstrong(int n){
    int sum = 0, dup = n;

    while (n > 0)
    {
        int last_dig = n % 10;
        sum = sum + (last_dig*last_dig*last_dig);
        n = n/10;
    }
    if (sum == dup)
    {
        return true ;
    }
    else{
        return false;
    }
}

int main(){
    int n = 35;
    int is_amstrong = amstrong(n);

    if (is_amstrong){
        cout << "Amstrong number";
    }
    else{
        cout << "not an amstrong number";
    }
    return 0;
}