#include <bits/stdc++.h>
using namespace std;
int mn=INT_MAX,n;
vector<pair<int,int>> dp;
void re(int goal,int sum,int lst,int round){
    if(!round){
        // cout << sum << '\n';
        if(lst==goal){
            mn=min(mn,sum);
        }
        return ;
    }
    re(goal,sum+dp[round-1].first,lst|dp[round-1].second,round-1);
    re(goal,sum,lst,round-1);
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int k,ch=1;
    cin >> n >> k;
    ch= (ch<<k)-1;
    for (int i = 0; i < n; i++)
    {
        int x,b,a=0;
        cin >> x;
        for (int j = 0; j < k; j++)
        {
            cin >> b;
            a=(a|b)<<1;
        }
        a>>=1;
        dp.push_back(make_pair(x,a));
        // cout << a << '\n';
    }
    re(ch,0,0,n);
    cout << mn;
    // cout << "ch" << ch;
    return 0;
}
/*
5 3
10 1 0 1
30 0 1 1
5 1 0 0
4 0 0 1
150 1 1 1
*/