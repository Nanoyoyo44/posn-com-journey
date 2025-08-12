#include <bits/stdc++.h>
using namespace std;

int p[2501],height[2501];
int n,m,u,v,w,s,x,people,mn=1e9;
vector<pair<int,pair<int,int>>> edgelist;

int findset(int a){
    return p[a]==a?a:p[a]=findset(p[a]);
}

void init(){
    for (int i = 1; i <= n; i++)
    {
        p[i]=i;
    }
}

void unionset(int a,int b){
    int y=findset(b),x=findset(a);
    if(y!=x){
        if(height[y]>height[x]){
            p[x]=y;
        }else{
            p[y]=x;
            if(height[y]==height[x]) height[y]++;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m;
    init();
    priority_queue<pair<int,pair<int,int>>> pq;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        pq.push({w,{u,v}});
    }
    cin >> s >> x >> people;    
    while (!pq.empty())
    {
        auto [w,node]=pq.top();
        pq.pop();
        unionset(node.first,node.second);
        if(findset(s)==findset(x)){
            mn=w;
            cout << ceil(1.0*people/(mn-1));
            break;
        }
    }
    
    return 0;
}
/*
7 10
1 2 30
1 3 15
1 4 10
2 4 25
2 5 60
3 4 40
4 7 35
3 6 20
5 7 20
7 6 30
1 7 99

*/