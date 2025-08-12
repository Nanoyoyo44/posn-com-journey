#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,mx=INT_MIN;
    int dp[n+1][n+1];
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l;cin >> l;
        nums.push_back(l);
    }
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=nums[j];
            dp[i][j]=sum;

            mx=max(mx,sum);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(mx == dp[i][j] && mx>0){
                for (int a = i; a <= j; a++)
                {
                    cout << nums[a] << ' ';
                }
                cout << '\n' <<mx;
                return 0;
            }
        }
    }
    cout << "Empty sequence";
    return 0;
}