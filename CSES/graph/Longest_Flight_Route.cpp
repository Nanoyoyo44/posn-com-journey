#include <bits/stdc++.h>
using namespace std;
 
#define ull unsigned long long
vector<ull> adj[100001];
ull n,m,ans=0;
ull dp[100001];
ull parent[100001];
bool ch=0;
vector<ull> answer;
 
ull cdp(ull s){
    if(!dp[s]){
        for(auto i:adj[s]){
            ull com=cdp(i);
            if(com==1 && i!=n) continue;
            if(dp[s]<com ){
                dp[s]=com;
                parent[s]=i;
            }
        }
        dp[s]++;
    }
    return dp[s];
}
void printtrack(ull a){
    if(!parent[a]){
        if(a==n) ch=1;
        return ;
    }
    // cout << parent[a] << " ";
    answer.push_back(parent[a]);
    printtrack(parent[a]);
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m;
    for (ull i = 0; i < m; i++)
    {
        ull u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    ans=cdp(1);
    printtrack(1);
    if(!ch) cout << "IMPOSSIBLE\n";
    else{
        cout << ans << '\n';
        cout << 1 << ' ';
        for(auto i: answer){
            cout << i << " ";
        }
    }
    // for (ull i = 1; i <= n; i++)
    // {
    //     if(dp[i]==ans){
    //         cout << i << " ";
    //         ans--;
    //     }
    // }
    
    return 0;
}
 
/*
5 5
1 2
2 5
1 3
3 4
4 5
4
1 3 4 5
5 5
1 2
2 5
1 3
3 4
4 5
*/