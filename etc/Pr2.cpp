#include <bits/stdc++.h>
using namespace std;

int mn=INT_MAX;
int grid[1001][1001];
bool vis[1001][1001];
int n,m,k;

void solve(int i,int j ,int k,int step){
    // cout << k << '\n';
    if(i<1 || j <1 || i> m || j>n || vis[i][j] ||k<0){
        return ;
    }
    if(grid[i][j]==1){
        k--;
    }
    // cout << i << " "<<j << " " << k << '\n';
    if(i==m && j==n){
        mn=min(step,mn);
        return ;
    }
    vis[i][j]=1;
    solve(i+1,j,k,step+1);
    solve(i-1,j,k,step+1);
    solve(i,j-1,k,step+1);
    solve(i,j+1,k,step+1);
    vis[i][j]=0;
}

int main(){
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> grid[i][j];
        }
    }
    solve(1,1,k,0);
    cout << mn << '\n';
    cout << vis[m][n];
    return 0;
}
/*
3 3 1
0 0 0
0 0 1
0 1 0
4

4 4 1
0 0 0 0
0 0 1 1
1 0 1 0
1 0 1 0
6
*/