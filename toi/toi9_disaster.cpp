#include <bits/stdc++.h>
using namespace std;

vector<int> adj[27];
bool vis[27][27][27];


void dfs(int curr_node){
    
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    map<char,int> mp;
    map<int,char> mp1;
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        int u,v;
        char a,b;
        cin >> a >> b;
        u=a-'A'+1;
        v=b-'A'+1;
        adj[u].push_back(v);
        adj[v].push_back(u);
        mp[a]++;
        mp[b]++;
        mx=max(mx,mp[a]);
        mx=max(mx,mp[b]);
    }
    for(auto [k,v]:mp){
        if(k==mx){
            dfs(v);
            break;
        }
    }
    return 0;
}
/*
6
AB
AE
BD
BC
CE
DE
*/