#include <bits/stdc++.h>
using namespace std;

int m,s,n;
bool arr[44][100];
bool vis[44][100];
int dir[44][100];
int dx[3]={-1,0,1};
int d[3]={1,3,2};
pair<int,int> parent[44][100];

void par(int y,int x){
    if(y==0) return ;
    cout << dir[y][x] << '\n';
    par(parent[y][x].first,parent[y][x].second);
}

void bfs(int y,int x){
    queue<pair<int,int>> q;
    q.emplace(y,x);
    vis[y][x]=1;
    while (!q.empty())
    {
        auto [py,px]=q.front();
        q.pop();
        if(py==n){
            // cout << dir[py][px] << '\n';
            par(py,px);
        }
        for (int i = 0; i < 3; i++)
        {
            int _y=py+1;
            int _x=px+dx[i];
            if(_y<0 || _x<1 || _y>n || _x>m || vis[_y][_x]||arr[_y][_x]==1) continue;
            vis[_y][_x]=1;
            parent[py][px]={_y,_x};
            q.emplace(_y,_x);
            dir[_y][_x]=d[i];
        }   
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> m >> s >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i+1][j+1];
        }
    }
    cout << "----------------\n";
    bfs(0,s);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dir[i+1][j+1] << " ";
    //     }
    //     cout << '\n';
    // }
    

    return 0;
}
/*
7
5
5
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 1 1 0 0 0 0
1 0 1 1 1 1 1 

output:

1
1
1
1
2 
*/