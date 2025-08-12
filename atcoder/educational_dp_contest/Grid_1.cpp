#include <bits/stdc++.h>
using namespace std;

string grid[1001];
int dp[1001][1001];
const int M=1e9+7;

bool ch(int i,int j){
    return i>=0 && j>=0 && grid[i][j]=='.';
}

int main(){
    int h,w;
    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        cin >> grid[i];
    }
    dp[0][0]=1;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if(ch(i-1,j)){
                dp[i][j]+=dp[i-1][j];
            }
            if(ch(i,j-1)){
                dp[i][j]+=dp[i][j-1];
            }
            dp[i][j]%=M;
        }
    }

    cout << dp[h-1][w-1];
    
    return 0;
}
/*
3 4
...#
.#..
....
*/