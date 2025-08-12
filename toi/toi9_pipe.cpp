#include <bits/stdc++.h>
using namespace std;

int n,m;
int grid[301][301];
/*
0  -> space
11 -> _|
12 -> |_
13 -> -|
14 -> |-
21 -> |
22 -> _
31 -> +
*/
void rec(int len,int py,int px,int dir,int prev_dir){
    cout << py << ',' << px << '\n';
    if(py<1 || px<1 || py>n || px>m ){
        // cout << len-1 << '\n';
        return ;
    }
    if(dir==11){ // _|
       if(prev_dir==13 || prev_dir== 14 || prev_dir==21) rec(len+1,py,px-1,grid[py][px-1],dir);//left
       else if(prev_dir==14 || prev_dir==22 ) rec(len+1,py-1,px,grid[py-1][px],dir);//up
       else cout << "out of case \n" ;
       cout << dir << " " << prev_dir<<'\n';
    }else if(dir==13){//-|
        if(prev_dir==14 || prev_dir==22)rec(len+1,py+1,px,grid[py+1][px],dir);//down
        else if(prev_dir==21 || prev_dir== 11) rec(len+1,py,px-1,grid[py][px-1],dir);//left
        else cout << "out of case \n";
    }else if(dir==14){//|-
        if(prev_dir==22 || prev_dir==12 || prev_dir==11) rec(len+1,py+1,px,grid[py+1][px],dir);//down
        else if(prev_dir == 21 || prev_dir== 11 ) rec(len+1,py,px+1,grid[py][px+1],dir);//right
        else cout << "out of case \n";
    }else if(dir==12){//|_
        if(prev_dir==22 || prev_dir==12 || prev_dir==11)rec(len+1,py-1,px,grid[py-1][px],dir);//down
        else if(prev_dir==13 || prev_dir== 14 || prev_dir==21) rec(len+1,py,px+1,grid[py][px+1],dir);//right
        else cout << "out of case \n";
    }else if(dir==21){//|
        if(prev_dir==13 || prev_dir== 14 || prev_dir==21)rec(len+1,py+1,px,grid[py+1][px],dir);//down
        else if(prev_dir==11 || prev_dir== 21 )rec(len+1,py-1,px,grid[py-1][px],dir);//up
        else cout << "out of case \n";
    }else if(dir==22){//_
        if(prev_dir==13 || prev_dir==11 || prev_dir==22)rec(len+1,py,px-1,grid[py][px-1],dir);//left
        else if(prev_dir==11 || prev_dir==13 )rec(len+1,py,px+1,grid[py][px+1],dir);//right
        else cout << "out of case \n";
    }else{//dir = 31
        if(prev_dir==11){
            rec(len+1,py,px-1,grid[py][px-1],prev_dir);
        }else if(prev_dir==12){
            rec(len+1,py,px+1,grid[py][px+1],prev_dir);
        }else if(prev_dir==21){
            rec(len+1,py+1,px,grid[py+1][px],prev_dir);
        }else if(prev_dir==13){
            rec(len+1,py+1,px,grid[py+1][px],prev_dir);
        }else if(prev_dir==14){
            rec(len+1,py+1,px,grid[py+1][px],prev_dir);
        }else if(prev_dir==31){
            rec(len+1,py+1,px,grid[py+1][px],prev_dir);
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            cin >> grid[i][j];
        }
    }

    // for (int i = 1; i <= m; i++)
    // {
    //     if(grid[1][i]==11 || grid[1][i]==12 || grid[1][i]==21 || grid[1][i]==31){
    //         cout << grid[1][i] << '\n';
            rec(1,1,4,grid[1][4],21);
    //     }
    // }
    
    
    return 0;
}

/*
5 6
0 21 14 11 0 21
0 12 31 13 0 21
14 22 31 11 14 31
21 0 12 22 11 21
31 22 22 22 22 11

3
10 9 10
*/