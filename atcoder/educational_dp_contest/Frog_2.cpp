#include <bits/stdc++.h>
using namespace std;

int N,K;
int arr[100001],dp[100001];

int main(){
    cin >> N >> K ;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 2; i <=N; i++)
    {
        dp[i]=dp[i-1]+abs(arr[i]-arr[i-1]);
        for (int j = 1; j <=K; j++)
        {
            if(i>j)
                dp[i]=min(dp[i],dp[i-j]+abs(arr[i]-arr[i-j]));
        }
    }
    cout << dp[N];

    return 0;
}