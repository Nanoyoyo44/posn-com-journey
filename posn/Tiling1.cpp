#include <bits/stdc++.h>
using namespace std;

bool visited[18][18];
int arr[18][18];
int n,score;
const int dx[]={-1,1,0,0},dy[]={0,0,-1,1};

bool inbound(int y,int x){
    if(y<0||y>=n||x<0||x>=n) return 0;
    return 1;
}

void re(int py,int px,int type){
    if(!inbound(py,px)||visited[py][px]||!arr[py][px]||arr[py][px]!=type){
        return;
    }
    visited[py][px]=1;
    score++;
    for (int i = 0; i < 4; i++)
    {
        re(py+dy[i],px+dx[i],type);
    }
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int correct=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            score=0;
            re(i,j,arr[i][j]);
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