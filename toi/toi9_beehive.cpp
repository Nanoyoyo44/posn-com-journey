#include <bits/stdc++.h>
using namespace std;

int hive[1001][1001];
int n,m;
int a=0,b=1;

void rec(int value,int cur_posx,int cur_posy){
    // cout << cur_posy<< '\n';
    if(cur_posx < 1 || cur_posx >n || cur_posy <1 || cur_posy >m) return ;
    if(cur_posy==m){
        if(a==value+hive[cur_posy][cur_posx]){
            b++;
        }else if(a<value+hive[cur_posy][cur_posx]){
            a=value+hive[cur_posy][cur_posx];
            b=1;
        }
        // cout << value+hive[cur_posy][cur_posx] << '\n';
        return;
    }
    if(cur_posy&1){
        rec(value+hive[cur_posy][cur_posx],cur_posx-1,cur_posy+1);
        rec(value+hive[cur_posy][cur_posx],cur_posx,cur_posy+1);
    }else{
        rec(value+hive[cur_posy][cur_posx],cur_posx+1,cur_posy+1);
        rec(value+hive[cur_posy][cur_posx],cur_posx,cur_posy+1);    
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> hive[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        rec(0,i,1);
    }
    cout << a <<" " << b;
    return 0;
}
/*
5 4
8 10 25 3
4 12 33 1
4 51 13 4
1 20 11 12
1 5 6 25

*/