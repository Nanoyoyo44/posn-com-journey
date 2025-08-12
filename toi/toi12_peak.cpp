#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int mx=INT_MIN;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> peak(n),ans;
    bool ch=0;
    for (int i = 0; i < n; i++)
    {
        cin >> peak[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(i==0&&peak[i]>peak[i+1]||i==n-1&&peak[i]>peak[i-1]||peak[i]>peak[i+1]&&peak[i]>peak[i-1]){
            ans.push_back(peak[i]);
        }
    }
    // cout << "-------\n";
    sort(ans.begin(),ans.end(),greater<int>());
    ans.resize(unique(ans.begin(),ans.end())-ans.begin());
    // reverse(ans.begin(),ans.end());
    if(ans.size()==0){
        cout << "-1";
    }else if(ans.size()<k){
        for (int i = ans.size()-1; i >=0; i--)
        {
            cout << ans[i] << "\n";
        }
    }else{
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << '\n';
        }
        
    }
    return 0;
}
/*
10
2
40
10
90
5
45
50
65
90
35
45


90
45
*/