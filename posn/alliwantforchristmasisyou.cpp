#include <bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,mx=INT_MIN,curr=1;
    int prev1,prev2;

    cin >> n >> prev1;
    for (int i = 0; i < n-1; i++)
    {
        cin >> prev2;
        if(prev1<=prev2) curr++;
        else curr=1;
        prev1=prev2;
        mx=max(mx,curr);
    }
    mx = mx<2 ? -1 : mx;
    cout << mx;
    return 0;
}