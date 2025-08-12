#include <bits/stdc++.h>
using namespace std;

bool vis[100001];
vector<long long> adj[100001];

void dfs(long long s){
    vis[s]=1;
    for(auto j:adj[s]){
        if(!vis[j]){
            dfs(j);
        }
    }
    return ;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    long long n,m,u,v;
    vector<long long> vec;
    cin >> n >> m;
    for (long long i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (long long i = 1; i <= n; i++)
    {
        if(!vis[i]){
            vec.push_back(i);
            dfs(i);
        }
    }
    cout << vec.size()-1<<'\n';
    for (long long i = 1; i < vec.size(); i++)
    {
        cout << vec[i] << " " << vec[i-1] << '\n';
    }
    return 0;
}
/*
4 2
1 2
3 4
*/