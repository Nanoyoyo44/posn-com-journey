#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

typedef pair<ull,ull> ii;

vector<pair<ull,ii>> edgelist;
vector<ull> p,ranks;
ull N,M,u,v,w;

void init(ull n){
    p.resize(n,0);
    ranks.assign(n,0);
    for (ull i = 1; i <= n; i++)
    {
        p[i]=i;
    }
}

ull findset(ull i){
    return (p[i]==i) ? i:(p[i]=findset(p[i]));
}

bool issameset(ull a,ull b){
    return findset(a)==findset(b);
}

void unionset(ull a,ull b){
    if(!issameset(a,b)){
        ull x=findset(a),y=findset(b);
        if(ranks[x]>ranks[y]){
            p[y]=x;
        }else{
            p[x]=y;
            if(ranks[x]==ranks[y]) ranks[y]++;
        }
    }
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ull cost=0;
    cin >> N >> M;
    for (ull i = 0; i < M; i++)
    {
        cin >> u >> v >> w;
        edgelist.push_back(make_pair(w,ii(u,v)));
    }
    init(N);

    sort(edgelist.begin(),edgelist.end(),greater<>());

    for (ull i = 0; i < M; i++)
    {
        pair<ull,ii> k=edgelist[i];
        if(!issameset(k.second.first,k.second.second)){
            cost+=k.first-1;
            unionset(k.second.first,k.second.second);
        }
    }
    cout << cost;

    // for(auto [a,b]:edgelist){
    //     cout << a << " ";
    // }
    return 0;
}
/*
6 9
1 2 8
2 3 6
1 4 6
4 2 6
4 5 8
2 5 7
5 6 5
2 6 9
3 6 5

33
*/