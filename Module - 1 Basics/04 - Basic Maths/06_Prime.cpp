#include <bits/stdc++.h>
using namespace std;

void brute(int n){
    int count = 0;

    for (int i = 1; i<= n; i++)
    {
        if(n%i==0){
            count += 1;
        }
    }
    if (count == 2)
    {
        cout << "prime" << endl;
    }
    else{
        cout << "not prime" << endl;
    }
}

void optimal(int n){
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0){
            count += 1;
            if(n / i != i){
                count += 1;
            }
        }
    }
    if (count == 2){
        cout << n << " is prime number" << endl;
    }
    else{
        cout << n << " is not prime number" << endl;
    }
    
}

int main(){
    int n ;
    cin >> n;

    brute(n);

    optimal(n);
    
    
    return 0;
}