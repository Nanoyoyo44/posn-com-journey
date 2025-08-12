#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int mx=INT_MIN;
    cin >> str;
    for(auto i:str){
        mx=max(mx,i-'0');
    }
    cout << mx;
    return 0;
}