#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MX=8000000;
vector<bool> dp(MX,1);

int main(){
    int n,cnt=0;
    cin >> n;
    vector<int> ans;
    dp[0]=dp[1]=0;
    for (int i = 2; i*i <= MX ; i++)
    {
        if(dp[i]){
            // cout << i << ' ';
            for (int j = i*i; j < MX; j+=i)
            {
                dp[j]=0;
            }
        }
    }
    for (int i = 0; i <= MX; i++)
    {
        if(dp[i]){
            // cout << i << " ";
            ans.push_back(i);
        }
    }
    cout << ans[n-1];
    return 0;
}