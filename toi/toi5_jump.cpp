#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k,mx=-1e9;
    cin >> n >> k;
    vector<int> rope(n);
    for (int i = 0; i < n; i++)
    {
        cin >> rope[i];
    }
    for (int i = 0; i < n; i++)
    {
        int itr=upper_bound(rope.begin(),rope.end(),rope[i]+k)-rope.begin()-1;
        // cout << itr-i << '\n';
        mx=max(mx,itr-i);
    }
    cout << mx;
    
    
    return 0;
}