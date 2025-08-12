#include <bits/stdc++.h>
using namespace std;

void hex(int n){
    // cout << n;
    if(!n){
        return;
    }
    hex(n/16);
    if(n%16<10) cout << n%16;
    else{
        cout << char(n%16-10+'A');
    }
    return;
}

int main(){
    int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
        int num;
        cin >> num;
        hex(num);
        cout << '\n';
    // }
    
    return 0;
}