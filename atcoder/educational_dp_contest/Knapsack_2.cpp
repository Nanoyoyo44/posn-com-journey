#include <bits/stdc++.h>
using namespace std;

int dp[100001],w[101],v[101];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N,W;
    cin >> N >> W;
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }
    memset(dp,0x3f,sizeof(dp));
    dp[0]=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 100000-v[i]; j >=0; j--)
        {
            dp[j+v[i]]=min(dp[j+v[i]],dp[j]+w[i]);
        }
        
    }   
    for (int i = 100000 ;i>=0; i--)
    {
        if(dp[i]<=W){
            cout << i;
            break;
        }
    }
    return 0;
}