#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s = "Gurpal";

    // strings stored in index
    cout << s[3] << endl; // p

    // for finding length of string using size() function
    int len = s.size();
    cout << len << endl; // 6

    // using negetive indexing to get a data of index
    cout << s[len-1] << endl; // l

    // for changeing string using index
    s[3] = 'l';
    cout << s << endl; // Gurlal

    return 0;
}