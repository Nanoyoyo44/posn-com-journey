#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,a[2501],mx=-1e9;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i+1];
    }
    
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        auto itr=lower_bound(ans.begin(),ans.end(),a[i]);
        if(itr==ans.end()){
            ans.push_back(a[i]);
        }else{
            *itr=a[i];
        }
    }
    
    cout << ans.size();
    return 0;
}