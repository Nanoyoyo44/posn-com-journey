#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;
const int inf=INT_MAX;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n,s;
    cin >> n >> s;
    vector<pii> adj[1<<s];
    vector<int> ans;
    vector<int> dist(1<<s,inf);
    for (int i = 0; i < n; i++)
    {
        int w,x,med=0,poison=0;
        cin >> w;
        for (int j = 0; j < s; j++)
        {
            cin >> x;
            if(x==1) med|=(1<<j);
            else if(x==-1) poison|=(1<<j);
        }
        adj[poison].emplace_back(w,med);
        ans.emplace_back(poison);
    }
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.emplace(0,0);//weight,node
    dist[0]=0;
    while (!pq.empty())
    {
        auto [d,node]=pq.top();
        pq.pop();
        if(d>dist[node]) continue;
        for(auto [dst,nd]:adj[node]){
            int distance=dst+d;
            if(distance<dist[nd]){
                dist[nd]=distance;
                pq.emplace(dist[nd],nd);
            }
        }
        for (int i = 0; i < s; i++)
        {
            if(node&(1<<i)){
                int v=node&~(1<<i);
                if(d<dist[v]){
                    dist[v]=d;
                    pq.emplace(dist[v],v);
                }
            }
        }
        
    }
    int a=0;
    for(auto i:ans){
        a=max(a,dist[i]==inf ?0:dist[i]);
    }
    cout << a;
    return 0;
}