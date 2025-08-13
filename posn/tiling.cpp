#include <iostream>
using namespace std;

int n,arr[18][18];
int score;
const int dx[]={-1,1,0,0},dy[]={0,0,-1,1};

bool inbound(int y,int x){
    if(y<1||y>n||x<1||x>n) return 0;
    return 1;
}
void rec(int type,int py,int px){
    if(arr[py][px]!=type ||arr[py][px]==0|| !inbound(py,px)){//
        return ;
    }
    arr[py][px]=-type;
    score++;
    for (int i = 0; i < 4; i++)
    {
        rec(type,py+dx[i],px+dy[i]);
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int correct=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            score=0;
            rec(arr[i][j],i,j);
            if(score==3){
                if(inbound(i+1,j+1) && arr[i+1][j]==arr[i][j]&& arr[i][j+1]==arr[i][j]){
                    correct++;
                }else if (inbound(i+1,j+1) && arr[i][j+1]==arr[i][j]&& arr[i+1][j+1]==arr[i][j])
                {
                    correct++;
                }else if (inbound(i+1,j-1) && arr[i+1][j]==arr[i][j]&& arr[i+1][j-1]==arr[i][j])
                {
                    correct++;
                }else if (inbound(i+1,j+1) && arr[i+1][j]==arr[i][j]&& arr[i+1][j+1]==arr[i][j])
                {
                    correct++;
                }
            }
        }   
    }
    cout << correct;
    return 0;
}
/*
3
1 1 0
1 2 2
3 2 2

1
*/