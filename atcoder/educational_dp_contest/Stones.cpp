#include <bits/stdc++.h>
using namespace std;

int a[101];
bool dp[100001];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i <=k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i-a[j]>=0&&!dp[i-a[j]]) dp[i]=1;
        }
    }
    
    cout << (dp[k]?"First":"Second");

    return 0;
}