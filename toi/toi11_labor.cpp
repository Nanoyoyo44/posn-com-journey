#include <bits/stdc++.h>
using namespace std;

typedef long long  ll ;

const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,m;
    cin >> m >> n;
    vector<ll> labor(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> labor[i];
    }
    sort(labor.begin(),labor.end());
    ll low=0,high=n*labor[0];
    while (low<high)
    {
        ll mid=low+(high-low)/2;
        ll sum=0;
        // cout << mid << '\n';
        for (ll i = 0; i < m; i++)
        {
            sum+=mid/labor[i];
        }
        if(sum>=n){
            high=mid;
        }else{
            low=mid+1;
        }
        
    }
    cout << low;
    
    return 0;
}