#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vector<vector<ii>> adjlist;
vi taken;
priority_queue<ii> pq;

void process(int vtx){
    taken[vtx]=1;
    for (int j = 0; j < adjlist.size(); j++)
    {
        ii v=adjlist[vtx][j];
        if(!taken[v.first]){
            pq.push(ii(-v.second,-v.first));
        }
    }
}

int main(){
    int V,E,u,v,w;
    cin >> V >> E;
    adjlist.assign(V,vii());
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        adjlist[u].push_back(ii(v,w));
        adjlist[v].push_back(ii(u,w));
    }
    
    int mst_cost=0;
    taken.assign(V,0);
    process(0);
    while (!pq.empty())
    {
        ii front = pq.top();
        pq.pop();
        u=-front.second;
        w=-front.first;
        if(!taken[u]){
            mst_cost+=w;
            process(u);
        }
    }
    cout << mst_cost;
    return 0;
}