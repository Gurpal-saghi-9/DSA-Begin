#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void func(){
    // Base Condition.
   if(cnt == 3)  return;
   cout<<cnt<<endl;

   // Count Incremented
   cnt++;
   func();
}

int main(){
    func();
    return 0;
}