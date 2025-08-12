#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
vector<pair<char,int>> adjlist[40001];
pair<int,int> keep[40005];
bool vis[40005];
int arr[901][901];
pair<int,int> mxmn_y={INT_MIN,INT_MAX},mxmn_x={INT_MIN,INT_MAX};

void walk(int node,int y,int x){
    if(vis[node]) return ;
    keep[node]={y,x};
    vis[node]=1;
    // cout << y << " " << x << '\n';
    mxmn_x.first=max(mxmn_x.first,x);
    mxmn_x.second=min(mxmn_x.second,x);
    mxmn_y.first=max(mxmn_y.first,y);
    mxmn_y.second=min(mxmn_y.second,y);
    for(auto i:adjlist[node]){
        char dir=i.first;
        int nxtnode=i.second;
        if(dir=='U'){
            walk(nxtnode,y-1,x);
        }else if(dir=='D'){
            walk(nxtnode,y+1,x);
        }else if(dir=='L'){
            walk(nxtnode,y,x-1);
        }else{
            walk(nxtnode,y,x+1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n,m;
    cin >> m >> n;
    for (int i = 0; i < m*n-1; i++)
    {
        int u,v;
        char dir;
        cin >> u >> dir >> v;
        if(dir=='U'){
            adjlist[u].push_back({'D',v});
            adjlist[v].push_back({'U',u});
        }else{
            adjlist[u].push_back({'R',v});
            adjlist[v].push_back({'L',u});
        }
    }
    walk(0,250,250);
    for (int i = 0; i < n*m; i++)
    {
        arr[keep[i].first][keep[i].second]=i;
    }
    // cout << "yes";
    // cout << mxmn_y.first << " " << mxmn_y.second << '\n';
    // cout << mxmn_x.first << " " << mxmn_x.second << '\n';
    for (int i = mxmn_y.second; i <= mxmn_y.first; i++)
    {
        // cout << i << " ";
        for (int j = mxmn_x.second; j <= mxmn_x.first; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
/*
3 2
1 U 5
0 U 3
4 L 2
0 L 1
5 U 2 
*/