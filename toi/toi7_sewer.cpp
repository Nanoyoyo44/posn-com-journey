#include <bits/stdc++.h>
using namespace std;

int a, b;
char sewer[101][101];
int dp[101][101];
int vis[101][101];

bool outofbound(int y,int x){
    return y<1 || y>a || x<1 || x>a;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> a >> b; // a=y b=x
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cin >> sewer[i][j];
        }
    }
    queue<pair<int, int>> q;
    q.emplace(1, 1);
    dp[1][1] = 1;
    vis[1][1]++;
    while (!q.empty())
    {
        auto [y, x] = q.front();
        q.pop();
        int dist = dp[y][x];
        if(vis[y][x]>1) continue;
        if (sewer[y][x] == 'B')
        {
            if (dp[y + 1][x] && dist == dp[y + 1][x] - 1)
            {
                cout << dist+1 << '\n';
                cout << y + 1 << " " << x << '\n';
                break;
            }
            if (dp[y][x + 1] && dist == dp[y][x + 1] - 1)
            {
                cout << dist+1 << '\n';
                cout << y << " " << x + 1 << '\n';
                break;
            }
            dp[y + 1][x] = dist + 1;
            dp[y][x + 1] = dist + 1;
            // if(dist==dp[y+1][x]){
            //     cout << y+1 << " "<<x << '\n';
            // }
            // if(dist==dp[y][x+1]){
            //     cout << y << " "<<x+1 << '\n';
            // }
            q.emplace(y + 1, x);
            vis[y+1][x]++;
            q.emplace(y, x + 1);
            vis[y][x+1]++;
        }
        else if (sewer[y][x] == 'D')
        {
            if (dp[y + 1][x] && dist == dp[y + 1][x] - 1)
            {
                cout << dist+1 << '\n';
                cout << y + 1 << " " << x << '\n';
                break;
            }
            dp[y + 1][x] = dist + 1;
            // if(dist==dp[y+1][x]){
            //     cout << y+1 << " "<<x << '\n';
            // }
            q.emplace(y + 1, x);
            vis[y+1][x]++;
        }
        else if (sewer[y][x] == 'R')
        {
            if (dp[y][x + 1] && dist == dp[y][x + 1] - 1)
            {
                cout << dist+1 << '\n';
                cout << y << " " << x + 1 << '\n';
                break;
            }
            dp[y][x + 1] = dist + 1;
            // if(dist==dp[y][x+1]){
            //     cout << y << " "<<x+1 << '\n';
            // }
            q.emplace(y, x + 1);
            vis[y][x+1]++;
        }else{
            if (dp[y][x - 1] && dist == dp[y][x - 1] - 1)
            {
                cout << dist+1 << '\n';
                cout << y << " " << x - 1 << '\n';
                break;
            }
            dp[y][x - 1] = dist + 1;
            // if(dist==dp[y][x+1]){
            //     cout << y << " "<<x+1 << '\n';
            // }
            q.emplace(y, x - 1);
            vis[y][x-1]++;
        }
    }
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= b; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    return 0;
}

/*
4 4
B R D N
D R B D
R R R D
N N N N
/ans
5
3 3
/

*/