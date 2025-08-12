#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int dp1[50001],dp2[50001],dp3[50001];
const int MX=50001;
// vector<int> dp1(MX),dp2(MX),dp3(MX);


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q;
    ll a;
    cin >> n >> q;
    for (int i = 1; i <=n; i++)
    {
        cin >> a;
        dp1[i]=dp1[i-1]+a;
    }
    for (int i = 1; i <=n; i++)
    {
        cin >> a;
        dp2[i]=dp2[i-1]+a;
        dp3[i]=dp1[i]+dp2[i];
    }
    cout << "---------\n";
    while (q--)
    {
        int var,a=1,b=1;
        cin >> var;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(dp1[i]+dp2[j]>=var){
                    if(max(i,j)<max(a,b)){
                        a=i;
                        b=j;
                    }
                }
            }
        }
        cout << max(a,b) << '\n';
        
    }

    cout << "dp1 : "; 
    for (int i = 1; i <= n; i++)
    {
        cout << dp1[i] << " ";
    }
    cout << "\ndp2 : "; 
    for (int i = 1; i <= n; i++)
    {
        cout << dp2[i] << " ";
    }
    cout << "\ndp3 : "; 
    for (int i = 1; i <= n; i++)
    {
        cout << dp3[i] << " ";
    }
    return 0;
}
/*
10 5
1 2 6 5 -3 4 -7 8 9 2
1 -2 3 4 5 -10 8 -4 5 15
20
25
50
32
16
*/