#include <bits/stdc++.h>
using namespace std;

bitset<1000001> ch;
int main(){
    int n,m;
    vector<int> nums;
    vector<int> ans;
    
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x); 
        ch.set(x);
    }
    
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x); 
    }
    for(auto i:ans){
        int left;
        bool c=0;
        for(auto j:nums){
            if(i>=j){
                left=i-j;
                if(ch[left]){
                    c=1;
                    break;
                }
            }
        }
        if(c) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}