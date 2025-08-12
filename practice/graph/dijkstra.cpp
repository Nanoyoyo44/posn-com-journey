#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 10000000

int main(){
    int V,E,s,u,v,w;
    vector<vii> adj;
    cin >> V >> E >> s;
    adj.assign(v,vii());
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back(ii(v,w));
    }
    
    vi dist (V,INF);
    dist[s]=0;
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    pq.push(ii(0,s));
    while (!pq.empty())
    {
        ii front = pq.top();
        pq.pop();
        int d=front.first ,u=front.second;
        if(d>dist[u]) continue;
        for (int i = 0; i < adj.size(); i++)
        {
            ii v=adj[u][i];
            if(dist[u]+v.second<dist[v.first]){
                dist[v.first]=dist[u]+v.second;
                pq.push(ii(dist[v.first],v.first));
            }
        }
        
    }
    

    return 0;
}