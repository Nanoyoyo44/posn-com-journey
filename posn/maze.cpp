#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
const int dx[4]={-1,1,0,0},dy[4]={0,0,1,-1};
bool maze[151][151];
int m,n,dp1[151][151],dp2[151][151];
int bomb=0,minpath=INT_MAX;

bool inbound(int y,int x){
    return !(y<0||x<0||y>=m||x>=n) ;
}

void bfs(int sy,int sx,int arr[151][151]){
    queue<pii> q;
    q.emplace(sy,sx);
    arr[sy][sx]=1;
    while (!q.empty())
    {
        auto [y,x] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int px =  x +dx[i];
            int py =  y +dy[i];
            if(!inbound(py,px) || arr[py][px]!=0 || !maze[py][px]) continue;
            arr[py][px]=arr[y][x]+1;
            q.emplace(py,px);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int sy,sx,ey,ex;
    cin >> m >> n >> sy >> sx >> ey >> ex;
    sy--;sx--;ey--;ex--;
    // memset(dp1,0,sizeof dp1);
    // memset(dp2,0,sizeof dp2);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    queue<pii> q;
    q.emplace(sy,sx);
    dp1[sy][sx]=1;
    // if(maze[sy][sx]){
        while (!q.empty())
        {
            auto [y,x] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int px =  x +dx[i];
                int py =  y +dy[i];
                if(!inbound(py,px) || dp1[py][px]!=0 || maze[py][px]==0) continue;
                dp1[py][px]=dp1[y][x]+1;
                q.emplace(py,px);
            }
        }
    // }

    q.emplace(ey,ex);
    dp2[ey][ex]=1;
    // if(maze[ey][ex]){

        while (!q.empty())
        {
            auto [y,x] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int px =  x +dx[i];
                int py =  y +dy[i];
                if(!inbound(py,px) || dp2[py][px]!=0 || maze[py][px]==0) continue;
                dp2[py][px]=dp2[y][x]+1;
                q.emplace(py,px);
            }
        }
    // }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(maze[i][j]) continue;
            int x=0,y=0;
            bool ch=0;
            for (int a = 0; a < 4; a++)
            {
                if(!inbound(i+dy[a],j+dx[a]))  continue;
                if(dp1[i+dy[a]][j+dx[a]]!=0) x=dp1[i+dy[a]][j+dx[a]];
                if(dp2[i+dy[a]][j+dx[a]]!=0) y=dp2[i+dy[a]][j+dx[a]];
                if(x!=0 && y!=0){
                    ch=1;
                    minpath=min(minpath,x+y+1);
                }
            }
            if(ch) bomb++;
        }
    }
    if(!maze[ey][ex]||!maze[sy][sx])
    cout << bomb << '\n' << minpath;
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