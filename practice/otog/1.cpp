#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long 

ull dp[1000001];

int main(){
    ull n,mx=-1;
    memset(dp,0x3f,sizeof dp);
    cin >> n;
    dp[0]=0;
    ull w[4]={1,2,5,15},v[4]={500,800,1500,3000};
    for (ull i = 1; i <= n; i++)
    {
        for (ull j = 0; j < 4; j++)
        {
            dp[i]=min(dp[i],dp[i-w[j]]+v[j]);
        }
    }

    cout << dp[n];
    return 0;
}