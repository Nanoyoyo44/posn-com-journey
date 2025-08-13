#include <bits/stdc++.h>
using namespace std;

int n,m;
string maze[41];

bool inbound(int y,int x){
    return y>=0 && y<n+20 && x>=0 && x<m;
}

void drop(int y,int x){
    while (inbound(y+1,x)&&maze[y+1][x]=='.')
    {
        maze[y+1][x]='#';
        maze[y][x]='.';
        y++;
        //hi sawddee krub
    }
}

int main(){
    cin >> n >> m;
    string str="";
    for(int i=0;i<m;i++) str+='.';
    fill(maze,maze+41,str);
    for (int i = 20; i < n+20; i++)
    {
        cin >> maze[i];
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        if(!a) continue;
        for (int j = 0; j < a; j++)
        {
            maze[j][i]='#';
        }
        int py=a;
        while (py--)
        {
            int y=py;
            while (inbound(y+1,i)&&maze[y][i]=='#'&&maze[y+1][i]=='.')
            {
                maze[y+1][i]='#';
                maze[y][i]='.';
                y++;
            }
        }
        
    }
    
    for (int i = 20; i < n+20; i++)
    {
        cout << maze[i] << '\n';
    }
    
    return 0;
}
/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/