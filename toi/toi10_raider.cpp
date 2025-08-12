#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define y first
#define x second
int grid[105][105];
bool vis[105][105][1005];
int n,m;
int min_dist=INT_MAX;
const int dy[6]={0,0,-1,-1,1,1},odd_dx[6]={1,-1,0,-1,0,-1},even_dx[]={1,-1,1,0,1,0};

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j]; 
        }
    }
    queue<piii> q;
    if(grid[(n-1)/2][0]==1){
        q.push({1,{(n-1)/2,0}});
        vis[(n-1)/2][0][1]=1;
    }
    if(grid[(n-1)/2+1][0]==1){
        q.push({1,{(n-1)/2+1,0}});
        vis[(n-1)/2+1][0][1]=1;
    }
    if(grid[(n-1)/2-1][0]==1){
        q.push({1,{(n-1)/2-1,0}});
        vis[(n-1)/2-1][0][1]=1; 
    }
    while (!q.empty())
    {
        auto [dist,pos]=q.front();
        // cout << pos.y << " " << pos.x << '\n';
        q.pop();
        if(pos.y==(n-1)/2&&pos.x==m-1){ 
            cout << dist ;
            return 0;
        }
        for (int i = 0; i < 6; i++)
        {
            int py,px;
            py=pos.y+dy[i];
            if((pos.y)&1){
                px=pos.x+odd_dx[i];
            }else{
                px=pos.x+even_dx[i];
            }
            if(py<0||px<0||py>=n||px>=m||vis[py][px][dist+1]||grid[py][px]==0||(dist+1)%grid[py][px]!=0) continue;
            // cout << i << '\n';
            q.push({dist+1,{py,px}});
            vis[py][px][dist+1]=1;
        }
    }
    return 0;
}
/*
5
4
1 1 3 8
0 1 1 0
1 6 5 7
1 3 2 3
2 5 2 0 
*/

/*
5
4
 1 1 3 8
0 1 1 0
 1 6 5 7
1 3 2 3
 2 5 2 0 
*/