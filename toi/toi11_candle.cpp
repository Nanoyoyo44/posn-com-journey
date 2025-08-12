#include <bits/stdc++.h>
using namespace std;

string grid[2000];
int n,m;
const int dy[]={1,1,1,0,0,-1,-1,-1},dx[]={-1,0,1,-1,1,-1,0,1};
void dfs(int y,int x){
    if(y<0||y>=n||x<0||x>=m||grid[y][x]=='0') return;
    grid[y][x]='0';
    for (int i = 0; i < 8; i++)
    {
        dfs(y+dy[i],x+dx[i]);
    }
}

void bfs(int y,int x){
    queue<pair<int,int>> q;
    q.emplace(y,x);
    while (!q.empty())
    {
        auto [py,px]=q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int yy =py+dy[i];
            int xx =px+dx[i];
            if(yy<0 || yy>=n || xx<0 || xx>=m ||grid[yy][xx]=='0' ) continue;
            grid[yy][xx]='0';
            q.emplace(yy,xx);
        }
        
    }
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(grid[i][j]=='1'){
                bfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
/*

4 5
10011
00001
01100
10011
*/