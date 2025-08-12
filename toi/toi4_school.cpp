#include <bits/stdc++.h>
using namespace std;

const int MXN=100;
const int dx[4]={-1,0,0,1},dy[4]={0,1,-1,0};
char graph[MXN][MXN];
int dp[MXN][MXN];
bool vis[MXN][MXN];
int w,l,h=0,ans=INT_MAX;
queue<pair<int,int>> q;

int bfs(int _y,int _x,int h){
    int cnt=0;
    for (int i = _y-h+1; i <= _y; i++)
    {
        for (int j = _x-h+1; j <= _x; j++)
        {
            if(vis[i][j]==false && graph[i][j]=='P'){
                q.emplace(i,j);
                cnt++;
                vis[i][j]=true;
                while (!q.empty())
                {
                    auto [y,x]=q.front();
                    q.pop();
                    for (int s = 0; s < 4; s++)
                    {
                        int px=x+dx[s];
                        int py=y+dy[s];
                        if(px<1 || py <1 || px>w || py>l) continue;
                        if(vis[py][px]==false && graph[py][px]=='P'){
                            q.emplace(py,px);
                            vis[py][px]=true;
                        }
                    }
                }
            }
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> w >> l;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if(graph[i][j]!='T') dp[i][j]=1;
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+dp[i][j];
        }
    }
    
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            for (int k = min(i,j); k >0 ; k--)
            {
                if(dp[i][j]-dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k]==k*k){
                    memset(vis,false,sizeof vis);
                    int w =bfs(i,j,k);
                    if(k>h){
                        h=k;
                        ans=w;
                    }else if(k==h){
                        ans=min(ans,w);
                    }
                }
            }
            
        }
        
    }
    if(h==0) cout << "0 0";
    else cout << h*h << " " << ans;
    
    return 0;
}
/*
8 6
SSSSSSSS
SSSSSSSS
SPPSSSSS
SSSPSSSS
SSSSSTTS
PSSSSTSS
*/