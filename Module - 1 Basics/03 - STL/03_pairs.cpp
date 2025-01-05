#include <bits/stdc++.h>
using namespace std;

void pairex(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int,int>> x ={1,{3,6}};
    cout << x.first << " " << x.second.second << " " << x.second.first << endl;

    pair<int, int> arr[] = {{1,2},{2,5},{3,1}};
    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;

}

int main(){
    pairex();

    return 0;
    
}