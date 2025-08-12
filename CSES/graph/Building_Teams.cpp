#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;
const int MXN=1e5+1;
vector<int> adj[MXN];
int key[MXN];
bool vis[MXN];

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<pii> q;
    for (int i = 1; i <= n; i++)
    {
        if(vis[i]) continue;
        vis[i]=1;
        key[i]=1;
        q.emplace(i,key[i]);
        while (!q.empty())
        {
            auto [node,k]=q.front();
            q.pop();
            for(auto j:adj[node]){
                if(key[j]==k){
                    cout << "IMPOSSIBLE";
                    return 0;
                }
                if(vis[j]) continue;
                vis[j]=1;
                if(k==1){
                    key[j]=2;
                }else{
                    key[j]=1;
                }
                q.emplace(j,key[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << key[i] << " ";
    }
    
    return 0;
}