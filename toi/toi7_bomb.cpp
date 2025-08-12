#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> nums;
    int n,x=INT_MIN,y=INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        nums.push_back(make_pair(a,b));
        x=min(x,a);
        y=min(y,b);
    }
    // cout << "=============\n";
    for (int i = 0; i < n; i++)
    {
        bool ch=1;
        for (int j = 0; j < n; j++)
        {
            if(nums[j].first>nums[i].first && nums[j].second>nums[i].second){
                ch=0;
            }
        }
        if(ch){
            cout << nums[i].first << ' ' << nums[i].second<< '\n';
        }
        
    }
    return 0;
}

/*
7
1 2
2 4
4 1
7 3
5 5
6 6
3 7
*/