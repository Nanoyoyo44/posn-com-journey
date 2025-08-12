#include <bits/stdc++.h>
using namespace std;

int n,m,score=0;
char arr[6][6];
const int dx[5]={0,-1,0,1},dy[5]={1,0,-1,0};

bool inbound(int x,int y){
    if(x<0||x>=n || y<0||y>=m){
        return 0;
    }
    return 1;
}

void re(int x,int y,char tp){
    if(!inbound(x,y)||arr[y][x]!=tp){
        return ;
    }
    arr[y][x]='-';
    score+=5;
    for (int i = 0; i < 4; i++)
    {
        re(x+dx[i],y+dy[i],tp);
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int round;
    cin >> round;
    for(int i=0;i<round;i++)
    {
        char di;
        int py,px,ppx,ppy;
        cin >> py >> px >> di;
        ppx=px;
        ppy=py;
        if(di=='L'){
            if(inbound(px-1,py)&&arr[py][px-1]=='-'){
                swap(arr[py][px],arr[py][px-1]);
                px--;
                while (inbound(px,py+1)&&arr[py+1][px]=='-')
                {
                    swap(arr[py][px],arr[py+1][px]);
                    py++;
                }   
                re(px,py,arr[py][px]);
                int i=0;
                while(inbound(ppx,ppy+i)&&arr[ppy+i+1][ppx]!='#'){
                    while (inbound(ppx,ppy+i+1)&&arr[ppy+i+1][ppx]=='-')
                    {
                        swap(arr[ppy+i][ppx],arr[ppy+i+1][ppx]);
                        ppy++;
                    }
                    i++;
                }
            }else{
                score-=5;
            }
        }else{
            if(inbound(px+1,py)&&arr[py][px+1]=='-'){
                swap(arr[py][px],arr[py][px+1]);
                px++;
                while (inbound(px,py+1)&&arr[py+1][px]=='-')
                {
                    swap(arr[py][px],arr[py+1][px]);
                    py++;
                }   
                re(px,py,arr[py][px]);
                int i=0;
                while(inbound(ppx,ppy+i)&&arr[ppy+i+1][ppx]!='#'){
                    while (inbound(ppx,ppy+i+1)&&arr[ppy+i+1][ppx]=='-')
                    {
                        swap(arr[ppy+i][ppx],arr[ppy+i+1][ppx]);
                        ppy++;
                    }
                    i++;
                }
            }else{
                score-=5;
            }
        }
        // cout << arr[py][px]<<'\n';
    }
    cout << score << '\n';
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << '\n';
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