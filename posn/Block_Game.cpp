#include <bits/stdc++.h>
using namespace std;

int n,m,score=0;
char maze[6][6];
bool visited[6][6];
const int dx[]={-1,1,0,0},dy[]={0,0,-1,1};

bool inbound(int y,int x){
    return (y >=0 && y<m && x>=0 && x<n);
}

void dfs(int y,int x,char key){
    if(!inbound(y,x) || maze[y][x]=='#'|| maze[y][x]=='-'||maze[y][x]!=key)  return ;
    maze[y][x]='-';
    score+=5;
    for (int i = 0; i < 4; i++)
    {
        dfs(y+dy[i],x+dx[i],key);
    }
}

bool check(int y,int x){
    char key=maze[y][x];
    for (int i = 0; i < 4; i++)
    {
        if(maze[y+dy[i]][x+dx[i]]==key) return true;
    }
    return false;
}

void dropdown(int y, int x){
    if(!inbound(y+1,x) || maze[y+1][x]!='-'){
        if(check(y,x)){
            dfs(y,x,maze[y][x]);
        }else{
            score-=5;
        }
        return;
    }
    maze[y+1][x]=maze[y][x];
    maze[y][x]='-'; 
    dropdown(y+1,x);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int order;
    cin >> m >>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }
    cin >> order;
    while (order--)
    {
        int posy,posx;
        char di;    
        cin >> posy >> posx >> di;
        if(di=='L'){
            if(!inbound(posy,posx-1) || maze[posy][posx-1]=='#') continue;
            maze[posy][posx-1]=maze[posy][posx];
            maze[posy][posx]='-';
            dropdown(posy,posx-1);
            while(--posy>=0) dropdown(posy,posx);
        }else{
            if(!inbound(posy,posx+1) || maze[posy][posx+1]=='#') continue;
            maze[posy][posx+1]=maze[posy][posx];
            maze[posy][posx]='-';
            dropdown(posy,posx+1);
            while(--posy>=0) dropdown(posy,posx);
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << maze[i][j] << " ";
            }
            cout << '\n';
        }
        cout << "======\n";
    cout << score << '\n';
    }
    return 0;
}
/*
4 5
# A - - #
# # - B #
# A B # #
# # # # #
2
1 3 L
0 1 R


5 5
# A - B #
# B - A #
# # - B #
# A B # #
# # # # #
3
0 1 L
0 3 L
0 1 R

*/

// abcdefghijklmnopqrstuvwxyz