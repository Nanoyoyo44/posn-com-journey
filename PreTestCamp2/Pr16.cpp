#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef long long ll;
ll dp[500001];
int price[500001];
int n,k,a;
const int inf=1e9;

int main(){
    memset(dp,-1,sizeof dp);
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> k;
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }
    priority_queue<pii,vector<pii>,greater<pii>> q;
    dp[1]=price[1];
    q.emplace(price[1],1);
    for (int i = 2; i <= n; i++)
    {
        auto x=q.top();
        while (i-x.second>k)
        {
            q.pop();
            x=q.top();
        }
        dp[i]=x.first+price[i];
        q.emplace(dp[i],i);
    }
    for (int i = 1; i <= n; i++)
    {
        // cout << dp[i] << '\n';
    }
    
    cout << dp[n];
    return 0;
}
/*
7
3
1 4 2 6 2 4 2
*/