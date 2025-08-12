#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,mx=-1;
    map<int,int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums[x]++;
        mx=max(mx,nums[x]);
    }
    for(auto n:nums){
        if(n.second == mx) cout << n.first << " ";
    }
    return 0;
}