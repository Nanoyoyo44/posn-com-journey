#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200001];
int min_path=INT_MAX;
bool vis[200001];
int parent[200001];
int mx_dist=-1e9;



int main(){
    int n,m,u,v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<pair<int,int>> q;
    q.emplace(1,1);
    vis[1]=1;
    vector<int> ans;
    while (!q.empty())
    {
        auto [node,dist]=q.front();
        q.pop();
        // cout << node << " ";
        if(node==n){
            cout << dist  << '\n';
            int a=node;
            ans.push_back(node);
            while (parent[a]!=0)
            {
                ans.push_back(parent[a]);
                // cout << parent[a] << " ";
                a=parent[a];
            }
            reverse(ans.begin(),ans.end());
            for(auto i:ans) cout << i << " ";
            return 0;
        }
        for(auto i:adj[node]){
            if(vis[i]) continue;
            q.emplace(i,dist+1);
            vis[i]=1;
            parent[i]=node;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;

}
/*

4 2
1 2
3 4

5 5
1 2
1 3
1 4
2 3
5 4

*/