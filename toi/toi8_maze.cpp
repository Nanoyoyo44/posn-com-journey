#include <bits/stdc++.h>
using namespace std;

int n,m,sy,sx,ey,ex,bomb=0,minpath=1e9;
int maze[155][155],visited[155][155];
int dp1[155][155],dp2[155][155];
const int dx[]={-1,0,0,1},dy[]={0,1,-1,0};

void print(){
    cout << "-------------\n";
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << dp1[i][j] << " ";
        }
        cout << '\n';
    }
}

int main(){
    cin >> m >> n >> sy >> sx >> ey >> ex;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> maze[i][j];
        }
    }
    
    queue<pair<int,int>> q;
    q.emplace(sy,sx);
    dp1[sy][sx]=1;
    dp2[ey][ex]=1;
    while (!q.empty())
    {
        auto [y,x]=q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int py=y+dy[i];
            int px=x+dx[i];
            if(dp1[py][px]==0){
                if(maze[py][px]) q.emplace(py,px);
                dp1[py][px]=dp1[y][x]+1;
            }
        }
    }
    q.emplace(ey,ex);
    while (!q.empty())
    {
        auto [y,x]=q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int py=y+dy[i];
            int px=x+dx[i];
            if(dp2[py][px]==0){
                if(maze[py][px]) q.emplace(py,px);
                dp2[py][px]=dp2[y][x]+1;
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(maze[i][j]) continue;
            if(dp1[i][j]!=0&&dp2[i][j]!=0){
                bomb++;
                minpath=min(minpath,dp1[i][j]+dp2[i][j]-1);
            }
        }
    }
    cout  << bomb << '\n'<< minpath;
    

    return 0;
}
/*
5 8
4 5
2 8
0 0 1 1 0 0 0 0
1 0 1 1 0 1 1 1 
1 0 1 1 1 0 0 1
1 1 0 0 1 0 0 1
0 0 1 1 0 1 1 1 

4
6
*/