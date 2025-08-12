#include <bits/stdc++.h>
using namespace std;

int mx=INT_MIN,arr[21][21];

void path(int x,int y,int s,int v){
    if(x<1||x>s||y<1||y>s||v>=arr[x][y]||arr[x][y]==100){
        return ;
    }
    mx=max(mx,arr[x][y]);
    path(x-1,y,s,arr[x][y]);
    path(x+1,y,s,arr[x][y]);
    path(x,y+1,s,arr[x][y]);
    path(x,y-1,s,arr[x][y]);
}

int main(){
    int s,x,y;
    cin >> s >> y >> x;
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cin >> arr[i][j];
        }
    }
    path(x,y,s,-6);
    cout << mx;
    return 0;
}