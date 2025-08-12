#include <bits/stdc++.h>
using namespace std;

char room[1001][1001];
int total=0;

bool outoffield(int x,int y,int n,int m){
    if(x>=0 && x <n && y>=0 && y<m && !(room[x][y]=='.' || room[x][y]=='#')) return 1;
    return 0;
}

void count_rooms(int x,int y,int n,int m){
    if(outoffield(x,y,n,m)) {
        total++;
        return;
    }

    for (int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            if(room[x+i][y+j]=='.'){
                room[x+i][y+j]=char(total+'0');
                count_rooms(x+i,y+j,n,m);
            }
        }
        
    }
    

}

int main(){
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> room[i][j];
        }    
    }
    count_rooms(0,0,n,m);
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << room[i][j];
        }
        cout << '\n';
    }
    return 0;
}
// ########
// #..#...#
// ####.#.#
// #..#...#
// ########