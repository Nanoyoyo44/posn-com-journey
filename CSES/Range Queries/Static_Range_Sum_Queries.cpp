#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[200001];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,q,a,b;
    cin >> n >> q;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a;
        dp[i]=a+dp[i-1];
    }
    while (q--)
    {
        cin >> a >> b;
        cout << dp[b]-dp[a-1] << '\n';
    }
    


    return 0;
}