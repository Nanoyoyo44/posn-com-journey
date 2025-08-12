#include <bits/stdc++.h>
using namespace std;

int area[1001][1001];

void re(int posx,int posy,int n){
    if(posx<0 || posx>=n || posy<0 || posy>=n || area[posx][posy]==0) return ;
    area[posx][posy]=9;
    if(area[posx][posy]==0) return;
    if(!(posx+1<0 || posx+1>n || posy<0 || posy>n) && area[posx+1][posy]!=9 && area[posx+1][posy]==1 && area[posx+1][posy]!=0){
        area[posx+1][posy]=9;
        re(posx+1,posy,n);
    }
    if(!(posx<0 || posx>n || posy+1<0 || posy+1>n) && area[posx][posy+1]!=9 && area[posx][posy+1]==1 && area[posx][posy+1]!=0 ){
        area[posx][posy+1]=9;
        re(posx,posy+1,n);

    }
    if(!(posx<0 || posx>n || posy-1<0 || posy-1>n) && area[posx][posy-1]!=9 && area[posx][posy-1]==1 && area[posx][posy-1]!=0 ) {
        area[posx][posy-1]=9;
        re(posx,posy-1,n);

    }
    if(!(posx-1<0 || posx-1>n || posy<0 || posy>n) && area[posx-1][posy]!=9 && area[posx-1][posy]==1 && area[posx-1][posy]!=0 ) {
        area[posx-1][posy]=9;
        re(posx-1,posy,n);

    }
}

int main(){
    int n,a,b;
    cin >> n >> a >> b; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> area[i][j];
        }
    }
    re(a,b,n);
    // cout << "===============\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << area[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}