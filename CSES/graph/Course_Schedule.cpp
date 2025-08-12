#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
bool vis[100001];
int cnt=0;
unordered_set<int> can_not_be_leader;

void dfs(int s){
    cout << s  << ' ';
    cnt++;
    vis[s]=1;
    for(auto j:adj[s]){
        dfs(j);
    }
}

int main(){
    int n,m,u,v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++)
    {

        // cout << i << " : ";
        for(auto j:adj[i]){
            // cout << j << " ";
            can_not_be_leader.insert(j);
        }
        // cout << '\n';
    }
    // for(auto i:can_not_be_leader){
    //     cout <<i << ' ';
    // }
    // cout << "\n________\n";
    for (int i = 1; i <= n; i++)
    {
        if(can_not_be_leader.find(i)!=can_not_be_leader.end())continue;
        dfs(i);
    }
    

    return 0;
}