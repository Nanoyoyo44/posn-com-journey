#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s,e,sum=0,best=0;
    cin >> n;
    vector<int> dp(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=max(dp[i],sum+dp[i]);
        best=max(best,sum);
    }
    cout << best;
    return 0;
}
/*
8
4 -6 3 -2 6 -4 -6 6
*/