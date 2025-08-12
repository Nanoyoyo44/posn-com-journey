#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int MX=1e5+1;
const int mod=1e9+7;
vector<int> adj[MX];
bool vis[MX];
int parent[MX];
int n,m;
int start_v,end_v;

bool dfs(int node,int par){
    vis[node]=true;
    parent[node]=par;
    for(auto nb:adj[node]){
        if(nb==par) continue;
        if(vis[nb]){
            start_v=node;
            end_v=nb;
            return true;
        }
        if(!vis[nb]){
            if(dfs(nb,node)) return true;
        }
    }
    return false;
}


bool visit_all(){
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i]){
            if(dfs(i,-1)) return true;
        }
    }
    return false ;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(!visit_all()){
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> ans;
    int curr_v=start_v;
    ans.push_back(start_v);
    while (curr_v!=end_v)
    {
        ans.push_back(parent[curr_v]);
        curr_v=parent[curr_v];
    }
    ans.push_back(start_v);
    cout << ans.size() << "\n";
    for(auto i:ans){
        cout << i << ' ';
    }

    return 0;
}