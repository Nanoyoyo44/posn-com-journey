#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<ull,ull> pii;
typedef pair<ull,pii> piii;

const ull mod=1e9+7;
const ull MX=1e5+1;
vector<pii> adj[MX];
// ull dist[MX];

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    ull n,m;
    cin >> n >> m;
    for (ull i = 0; i < m; i++)
    {
        ull u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push({0,1});//weight node
    vector<ull> dist(n+1,ULLONG_MAX);
    dist[1]=0;
    while (!pq.empty())
    {
        auto [d,node]=pq.top();
        pq.pop();
        if(d>dist[node]) continue;
        for(auto [nd,w]:adj[node]){
            if(dist[node]+w<dist[nd]){
                dist[nd]=dist[node]+w;
                pq.push({dist[nd],nd});
            }
        }
    }
    for (ull i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
    
    
    return 0;
}