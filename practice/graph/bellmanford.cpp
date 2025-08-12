#include <bits/stdc++.h>
using namespace std;

// int dis[101];
// int n,x;
// vector<tuple<int,int,int>> edges;

// int main(){
//     memset(dis,0x3f,sizeof dis);
//     dis[x]=0;
//     for (int i = 1; i <=n-1; i++)
//     {
//         for(auto e:edges){
//             auto [a,b,w]=e;
//             dis[b]=min(dis[b],dis[a]+w);
//         }
//     }

//     return 0;
// }

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF INT_MAX;

int main(){
    int V,E,u,s,v,w;
    vector<vii> adj;
    cin >> V >> E >> s;
    adj.assign(V,vii());
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back(ii(v,w));
    }
    vi dist(V,10000000);
    dist[s]=0;
    for (int i = 0; i < V-1; i++)
    {
        for (int u = 0; u < V; u++)
        {
            for (int j = 0; j < adj[u].size(); j++)
            {
                ii v=adj[u][j];
                dist[v.first]=min(dist[v.first],dist[u]+v.second);
            }
        }
    }

    bool hasnegativecycle=false;

    for (int u = 0; u < V; u++)
    {
        for (int j = 0; j < adj[u].size(); j++)
        {
            ii v=adj[u][j];
            if(dist[v.first]>dist[u]+v.second){
                hasnegativecycle=true;
            }
        }
    }
    cout << hasnegativecycle << '\n';
    return 0;   
}