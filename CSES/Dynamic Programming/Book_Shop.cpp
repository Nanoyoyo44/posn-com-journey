#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> v(n+1),w(n+1),dp(x+1,0);
    for (int i = 0; i < n; i++)
    {
        cin >>  w[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >>  v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >=w[i] ; j--)
        {
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    
    cout << dp[x];

    return 0;
}

/*
4 10
4 8 5 3
5 12 8 1
*/