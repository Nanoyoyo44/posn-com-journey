#include <bits/stdc++.h>
using namespace std;

// void re(int z,int o,int n){
//     for(auto i:nums) cout << i;
//     cout < '\n';
//     swap(nums)
// }

int main(){
    int z,o,n,cnt=0;
    vector<int> nums;
    cin >> z >> o >> n;
    for (int i = 0; i < z; i++)
    {
        nums.push_back(0);
    }
    for (int i = 0; i < o; i++)
    {
        nums.push_back(1);
    }
    nums.push_back(2);
    sort(nums.begin(),nums.end());
    do
    {
        int sum=0,in=nums.size();
        bool ch=1;

        for (int j = 0; j < nums.size(); j++)
        {
                // cnt++;
            if(nums[j]==2) in=j;
            if(nums[j]==1 && in < j){
                ch=0;
            }
        }
        if(ch){
            for (int i = 0; i < nums.size(); i++)
            {
                sum+=nums[i]*(pow(2,nums.size()-i)-1);
            }
            // for(auto i:nums) cout << i ;
            // cout << " : ";
            // cout << sum << '\n';
            cnt++;
            if(cnt==n) {
                cout << sum << '\n';
                return 0;
            }
        }
    } while (next_permutation(nums.begin(),nums.end()));
    
    
    cout << "NONE";
    return 0;
}