#include<bits/stdc++.h>
using namespace std;

vector<int> nums;
int mx = INT_MIN;

void re(int sum,int count ,int round){
    if(count == round){
        mx=max(mx,sum);
        return;
    }
    re(sum+nums[count],count+1,round);
    re(sum,count+1,round);
}

int main(){
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        nums.push_back(x);
    }
    re(0,0,n);
    cout << mx;
    return 0;
}