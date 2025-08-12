#include <bits/stdc++.h>
using namespace std;

void re(string str,int n){
    if(!n){
        cout << str << '\n';
        return;
    }
    str+='0';
    re(str,n-1);
    str.pop_back();
    str+='1';
    re(str,n-1);
}

int main(){
    int n;
    string str;
    cin >> n;
    re(str,n);
    return 0;
}