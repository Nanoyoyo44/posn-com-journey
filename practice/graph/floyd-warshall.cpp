#include <bits/stdc++.h>
using namespace std;

#define INF 100000

int main(){
    int V,E,u,v,w,adj[201][201];
    cin >> V >> E;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            adj[i][j]=INF;
        }
        adj[i][i]=0;
    }
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        adj[u][v]=w;
    }
    
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; i++)
        {
            for (int k = 0; k < V; i++)
            {
                adj[j][k]=min(adj[j][k],adj[j][i]+adj[i][k]);
            }
        }   
    }
    return 0;
}