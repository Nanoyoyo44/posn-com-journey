#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,mx=INT_MIN,mn=INT_MAX;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout << mx << '\n' << mn;
    return 0;
}