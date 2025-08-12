#include <bits/stdc++.h>
using namespace std;

int n,m;
string arr[1001];
const int dx[]={0,0,1,-1},dy[]={1,-1,0,0};

bool inbound(int y,int x){
    if(y<0||y>=n || x<0||x>=m){
        return 0;
    }
    return 1;
}

void room(int py,int px){
    if(!inbound(py,px)||arr[py][px]=='#'){
        return;
    }
    arr[py][px]='#';
    for (int i = 0; i < 4; i++)
    {
        room(py+dy[i],px+dx[i]);
    }
    
}

int main(){
    int total=0;
    int posy=0,posx=0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]=='#'){
                continue;
            }
            room(i,j);
            total++;
        }
    }
    cout << total;
    return 0;
}
/*
5 8
########
#..#...#
####.#.#
#..#...#
########

3
*/