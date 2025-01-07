#include <bits/stdc++.h>
using namespace std;

void find_GCD_Brute(int n1, int n2){
    int GCD = 1;
    for (int i = 1; i <= min(n1,n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            GCD = i;
        }
        cout << GCD << " ";
    }
    cout << endl;
    cout << GCD;
    cout << endl;
}

int find_GCD_Better(int n1, int n2){
    for (int i = min(n1,n2); i > 0; i--){
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int n1 = 12, n2 = 9;

    find_GCD_Brute(n1, n2);

    int gcd = find_GCD_Better(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

   
    return 0;
}