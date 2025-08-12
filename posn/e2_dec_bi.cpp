#include <bits/stdc++.h>
using namespace std;

void bi(int n){
    // cout << n;
    if(!n){
        return;
    }
    bi(n/2);
    cout << n%2;
    return;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        bi(num);
        cout << '\n';
    }
    
    return 0;
}