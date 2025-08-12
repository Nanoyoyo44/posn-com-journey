#include <bits/stdc++.h>
using namespace std;

vector<int> coin(101);
vector<int> dp(1000001,1e9);
int n,x;

int minn(int s){
    if(s<0) return 1e9;
    if(s==0) return 0;
    if(dp[s]!=1e9) return dp[s];
    for (int i = 0; i < n; i++)
    {
        dp[s]=min(dp[s],minn(s-coin[i])+1);
    }
    return dp[s];
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    int re=minn(x);
    cout << (re==1e9?-1:re);
    return 0;
}   