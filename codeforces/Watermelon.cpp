#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n&1){
        // cout << "NO";
        return 0;
    }else{
        // cout << "YES";
    }
    n/=2;
    if(n&1){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}