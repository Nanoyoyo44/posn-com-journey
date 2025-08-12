#include <bits/stdc++.h>
using namespace std;

unsigned long long dp[100001];
int w[101],v[101];

int main(){
    int N,W;
    cin >> N >> W;
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j =W; j >= w[i]; j--)
        {
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }   
    }

    cout << dp[W];
    return 0;
}