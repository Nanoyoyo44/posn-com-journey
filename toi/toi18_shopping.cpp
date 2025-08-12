#include <bits/stdc++.h>
using namespace std;

const long long int ss=5e5+1;
long long int dp[ss],p[ss];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    long long int n,m;
    cin >> n >> m;
    for (long long int i = 1,j=1,k=1; i <= n; i++)
    {
        long long int a;
        cin >> a;
        if(a<0){//market
            dp[i]=dp[i-1]-a;
            p[i]=p[i-1];
            // j=i+1;
        }else{
            dp[i]=dp[i-1];
            p[i]=p[i-1]+a;
            // k=i+1;
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    // cout << '\n';
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << p[i] << " ";
    // }
   while (m--)
    {
        long long int s,b,itr,k=0;
        cin >> s >> b;
        for (int i = (n+1)/2; i >=1; i/=2)
        {
            while(k+i<=n && dp[k+i]-dp[s]<b) k+=i;
        }
        cout << p[k]-p[s] << '\n';
    }
    // while (m--)
    // {
    //     long long int s,b,itr,k=0;
    //     cin >> s >> b;
    //     s++;
    //     b+=dp[s-1];
    //     itr = lower_bound(dp,dp+n,b)-dp;
    //     cout << p[itr]-p[s-1] << '\n';
    // }
    return 0;
}
/*
8 6
-10 -3 5 6 -20 3 4 0
0 3
0 13
0 14
2 1
2 500000000
6 1
*/