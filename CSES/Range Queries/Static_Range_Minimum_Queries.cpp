#include <bits/stdc++.h>
using namespace std;

int qr[20001],nums[20001];


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q,a,b,ans=INT_MAX;
    cin >> n >> q;
    int ss =sqrt(n);
    for (int i = 1; i <=n; i++)
    {
        cin >> nums[i];
        qr[(i)/ss+1]=min(qr[(i)/ss+1],nums[i]);
    }
    while (q--)
    {
        cin >> a >> b;
        while (a%ss!=0)
        {
            ans=min(ans,nums[a]);
            a++;
        }
        while (a+ss<=b)
        {
            ans=min(ans,qr[a/ss+1]);
            a+=ss;
        }
        while (a<=b)
        {
            ans=min(nums[a],ans);
            a++;
        }
        cout << ans << '\n';
        
    }
    return 0;
}
/*
Input:

8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3
Output:

2
1
1
4
*/