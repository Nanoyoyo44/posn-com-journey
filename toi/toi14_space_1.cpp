#include <bits/stdc++.h>
using namespace std;

const int dy[4]={-1,1,0,0},dx[4]={0,0,1,-1};
const int inf=1e9;
int n,m,a=0,b=0,c=0;

void bfs(int y,int x,vector<string>& grid,vector<vector<bool>>& vis){
    queue<pair<int,int>> q;
    q.emplace(y,x);
    vis[y][x]=1;
    int mx_x=x,mx_y=y,mn_x=x,mn_y=y;
    vector<int> rem(n+1,0);
    while (!q.empty())
    {
        auto [_y,_x]=q.front();
        q.pop();
        mx_x=max(mx_x,_x),mx_y=max(mx_y,_y),mn_x=min(mn_x,_x),mn_y=min(mn_y,_y);
        rem[_y]++;
        for (int i = 0; i < 4; i++)
        {
            int py=_y+dy[i];
            int px=_x+dx[i];
            if(py<0 || px<0 || py>=m || px>=n || vis[py][px] || grid[py][px]=='0') continue;
            q.emplace(py,px);
            vis[py][px]=1; 
        }
    }
    if(rem[y]==rem[y-1]||rem[y]==rem[y+1]){
        a++;
    }else if (abs(mx_x-mn_x)==abs(mx_y-mn_y))
    {
        b++;
    }else{
        c++;
    }
}

int main(){
    cin >> n >> m;
    vector<vector<bool>> vis(m,vector<bool> (n));
    vector<string> grid(n);
    for (int i = 0; i < m; i++)
    {
        cin >> grid[i];
    }
    
    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if(grid[y][x]=='1'&&!vis[y][x]){
                bfs(y,x,grid,vis);
                // cout << "pos : " << y <<","<< x << '\n';
            }
        }   
    }
    cout << a << " " << b << " " << c;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << vis[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    

    return 0;
}
/*
20 12
00000000000000000000
00100000001111111110
01110000000111111100
11111000000011111000
00000000000001110000
00000000000000100000
00000000000000000000
00011111000000000000
00011111000000000000
00011111000000000000
00011111000000000000
00011111000000000000
*/