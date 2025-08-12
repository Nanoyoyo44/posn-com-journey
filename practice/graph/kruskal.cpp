#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii; 
typedef vector<int> vi; 
typedef vector<ii> vii; 

vi p(1000),ranks(1000);
void initset(int N){
    ranks.assign(N,0);
    p.assign(N,0);
    for (int i = 0; i < N; i++)
    {
        p[i]=i;
    }
}
int findset(int i){
    return (p[i]==i) ? i:(p[i]=findset(p[i]));
}

bool isSameSet(int i,int j){
    return findset(i)==findset(j);
}

void unionset(int i,int j){
    if(!isSameSet(i,j)){
        int x=findset(i),y=findset(j);
        if(ranks[x]>ranks[y]){
            p[y]=x;
        }else{
            p[x]=y;
            if(ranks[x]==ranks[y]) ranks[y]++;
        }
    }
}

int main(){
    int V,E,u,v,w,mst_cost=0;
    cin >> V >> E;
    vector<pair<int,ii>> edgelist;
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        edgelist.push_back(make_pair(w,ii(u,v)));
    }
    sort(edgelist.begin(),edgelist.end());
    initset(V);
    for (int i = 0; i < E; i++)
    {
        pair<int,ii> k=edgelist[i];
        if(!isSameSet(k.second.first,k.second.second)){
            mst_cost+=k.first;
            unionset(k.second.first,k.second.second);
        }
    }
    cout << mst_cost;
    return 0;   
}