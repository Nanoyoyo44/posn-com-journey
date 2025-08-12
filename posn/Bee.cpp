#include <iostream>
#include <vector>
using namespace std;
int fi(int n){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for (int i = 2; i <= n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    while (1)
    {
        int n;
        cin >> n;
        if(n==-1) return 0;
        cout << fi(n+3)-1<< " " << fi(n+4)-1 << '\n';
        // cout << fi(n)<< " " << fi(n+1) << '\n';
    }
}