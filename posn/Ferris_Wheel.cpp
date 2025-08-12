#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,r,n,x,sum=0;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    l=0;
    r=n-1;
    while (l<r)
    {
        if(nums[l]+nums[r]>10){
            l++;
            sum+=2;
        }else{
            sum++;
        }
        r--;
    }
    
    cout << sum;
    return 0;
}

/*
4 10
7 2 3 9
*/