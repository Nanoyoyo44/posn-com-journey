#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100000+1),banana(100000+1);
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> banana[i+1];
    }
    
    dp[0]=dp[1]=dp[2]=0;
    dp[3]=banana[3];
    for (int i = 3; i <= n; i++)
    {
        dp[i]=max({dp[i-3]+banana[i],dp[i-1],dp[i-2]});
    }
    cout << dp[n];


    return 0;
}

/*
12
1
2
5
4
3
0
6
1
2
7
2
1

*/