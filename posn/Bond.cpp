#include <bits/stdc++.h>
using namespace std;

int n;
double chance[25][25];
double dp[(1<<20)];
int cnt;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> chance[i][j];
            chance[i][j]/=100.0;
        }
    }

    dp[0]=100.0;
    for (int mask = 0; mask < (1<<n); mask++)
    {
        cnt=__builtin_popcount(mask);
        for (int j = 0; j < n; j++)
        {
            if(!(mask&(1<<j))){
                dp[mask|(1<<j)]=max(dp[mask|(1<<j)],dp[mask]*chance[j][cnt]);
            }
        }   
    }
    
    cout << fixed << setprecision(12) << dp[(1<<n)-1];
    return 0;
}