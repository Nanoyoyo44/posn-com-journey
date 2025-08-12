#include <bits/stdc++.h>
using namespace std;
 
#define pii pair<int,int>
 
int n,m;
const int dy[]={0,0,-1,1    },dx[]={-1,1,0,0};
const char di[]={'L','R','U','D'};
string maze[1001];
queue<pii> q;
pii parent[1001][1001];
char dir[1001][1001];
bool visited[1001][1001];
string ans;
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    pii start,end;
    bool ch1=0,ch2=0,chans=0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> maze[i];
        if(!(ch1 && ch2)){
 
            for (int j = 0; j < m; j++)
            {
                if(maze[i][j]=='A'){
                    start=make_pair(i,j);
                    q.emplace(i,j);
                    ch1=1;
                }else if (maze[i][j]=='B')
                {
                    end=make_pair(i,j);
                    ch2=1;
                }
            }
        }
    }
 
    while (!q.empty())
    {
        auto [y,x] =q.front();
        q.pop();
        if(maze[y][x]=='B'){
            chans=1;
            while (maze[y][x]!='A')
            {
                ans+=dir[y][x];
                auto [yy,xx]=parent[y][x];
                y=yy;
                x=xx;
            }
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            int py=y+dy[i];
            int px=x+dx[i];
            if(py<0 || py>=n || px<0 || px>=m || visited[py][px] || maze[py][px]=='#') continue;
            visited[py][px]=true;
            parent[py][px]=make_pair(y,x);
            dir[py][px]=di[i];
            q.emplace(py,px);
        }
        
    }
    if(!chans){
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    cout << ans.size() << '\n';
    reverse(ans.begin(),ans.end());
    cout << ans;
    
 
    return 0;   
}
/*
5 8w
########
#.A#...#
#.##.#B#
#......#
########
 
YES
9
LDDRRRRRU
