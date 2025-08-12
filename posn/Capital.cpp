#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adj[100002];
int max_dist=INT_MIN;

void dfs(int u,int parent,int dist){
    max_dist=max(max_dist,dist);
    for(auto [v,w]:adj[u]){
        if(v==parent) continue;
        dfs(v,u,dist+w);
    }
}

int main(){
    int n,u,v,w;
    cin >> n;
    while (--n)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        // adj[v].push_back({u,w});
    }
    dfs(1,-1,0);
    cout << max_dist;
    return 0;
}
/*
11
1 2 1427
1 3 741
1 4 1763
1 5 2491
1 6 1849
2 7 1219
3 8 1100
4 9 1071
3 10 1587
2 11 1418

*/