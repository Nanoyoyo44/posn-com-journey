#include <bits/stdc++.h>
using namespace std;

void oct(int n){
    if(!n) return;
    oct(n/8);
    cout << n%8;
}

int main(){
    int n;  
    cin >> n;
    oct(n);
    return 0;
}