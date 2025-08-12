#include <bits/stdc++.h>
using namespace std;

unsigned long long dp[10001];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    unsigned long long n,q,a;
    cin >> n >> q;
    for (unsigned long long i = 1; i <= n; i++)
    {
        cin >> a;
        dp[i]=a+dp[i-1];
    }
    while (q--)
    {
        unsigned long long k,g=0,mn=INT_MAX;
        cin >> k;
        for (unsigned long long p = 1; p <= dp[n]; p++)
        {
            unsigned long long s=0;
            g=0;
            // cout << "p : " << p << "|";
            while (s!=n)
            {
                unsigned long long itr=lower_bound(dp+s,dp+n,p+dp[s])-dp;
                s=itr;
                // cout << s << " ";
                g++;
            }
            // cout << "group : " << g ;
            if(g==k){
                mn=min(mn,p);
            }
            // cout << '\n';
        }
        // cout << mn;
        // cout << "\n---------------\n";
        cout << mn << '\n';
    }
    
    // for (unsigned long long i = 0; i < n; i++)
    // {
    //     cout << dp[i+1] << " ";
    // }
    
    

    return 0;
}
/*
5 2
7 2 6 9 3
2
4
*/