#include <bits/stdc++.h>
using namespace std;

int n,k,ans=0;
int dp[33][33];

int countseq(int n,int k,bool ch){
    if(n==0) return (k>=0?1:0);
    if(k<0) return 0;
    if(dp[n][k]!=-1) return dp[n][k];
    int ans=countseq(n-1,k,true);
    if(ch) ans+=countseq(n-1,k-1,false);
    return dp[n][k]=ans;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    memset(dp,-1,sizeof dp);
    cin >> n >> k;
    int re=countseq(n,k,true);//true = 1 | false = 0
    re+=countseq(n,k,false);
    cout << re+1;
    return 0;
}