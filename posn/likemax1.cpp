#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,in=0,count=0;
    cin >> n;
    map<int,int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums[x]++;
        if(count <= nums[x]){
            in = x;
            count = nums[x];
            cout << in << '\n';
        }else{
            cout << in << '\n';
        }
    }
    cout << '\n';
    // for(auto i:nums){
    //     cout << i[0] << " " << i[1] << '\n';
    // }   
}