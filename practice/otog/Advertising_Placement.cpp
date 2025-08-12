#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> c(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    
    vector<int> dp(n+1,-1);

    if(n==1){
        cout << c[0];
        return 0;
    }
    if(n==2){
        cout << max(c[0],c[1]);
        return 0;
    }
    dp[0]=0;
    dp[1]=c[1];
    dp[2]=max(c[2],c[1]);
    for (int i = 3; i <= n; i++)
    {
        dp[i]=max(c[i]+dp[i-2],dp[i-1]);
    }
    cout << dp[n];

    return 0;
}