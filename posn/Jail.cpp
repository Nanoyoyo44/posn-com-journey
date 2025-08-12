#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> nums;
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <=n; i++)
    {
        nums.push(i);
    }
    while(!nums.empty()){
        for (int i = 1; i < m; i++)
        {
            nums.push(nums.front());
            nums.pop();
        }
        cout << nums.front() << " ";
        nums.pop();
        
    }
    return 0;
}