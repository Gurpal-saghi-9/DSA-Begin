#include <bits/stdc++.h>
using namespace std;

int count_Dig(int n){
    int count = 0;

    while (n > 0)
    {
        count += 1;
        n = n/10;
    }
    return count;
}

int main(){

    int n = 134561;
    int count = count_Dig(n);

    cout << count;

    return 0;
}