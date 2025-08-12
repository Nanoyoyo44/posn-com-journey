#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N=505;
const ll INF=LONG_MAX/4;

int n,m;
ll a[N],b[N],dp[N][N],ans;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >>  m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j]=INF;
        }
    }
    
    dp[1][0]=0;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int v = 1; v <= n; v++)
            {
                dp[j][i]=min(dp[j][i],max(dp[v][i-1],abs(a[i]-a[j])+abs(b[i]-b[j])));
            }   
        }
    }
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            
            cout << dp[i][j] << " ";   
        }
        cout << '\n';
    }
    return 0;
}
/*
5 2
0 1
2 2
3 6
6 6
9 10
10
15

4

5 2
0 1
2 2
3 6
6 6
9 10
10
30
*/