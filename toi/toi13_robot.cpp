#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
string graph[2001];
bool vis[2001][2001];
vector<vector<int>> dist1(2001, vector<int>(2001, INT_MAX));
const int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    vector<pii> item;
    vector<pii> robot;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> graph[i];
        if(graph[i].find('X')!=string::npos||graph[i].find('A')!=string::npos){
            for (int j = 0; j < m; j++)
            {
                if (graph[i][j] == 'X')
                {
                    robot.push_back({i, j});
                }
                else if (graph[i][j] == 'A')
                {
                    item.push_back({i, j});
                }
            }
        }
    }
    // robot.pop_back();
        // vector<vector<int>> dist1(2001, vector<int>(2001, 0));
    queue<pii> q;
    for(auto [y,x]:robot){
        q.emplace(y, x);
        dist1[y][x]=0;
        vis[y][x] = 1;
    }
    memset(vis, 0, sizeof vis);
    while (!q.empty())
    {
        auto [_y, _x] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int py = _y + dy[i];
            int px = _x + dx[i];
            if (py < 0 || px < 0 || py >= n || px >= m || vis[py][px] || graph[py][px] == 'W')
                continue;
            if(dist1[py][px]<=dist1[_y][_x]+1) continue;
            q.emplace(py, px);
            dist1[py][px] = dist1[_y][_x] + 1;
            vis[py][px] = 1;
        }
    }
    int cnt = 0, total_dist = 0;
    for (auto [y, x] : item)
    {
        if (dist1[y][x] != INT_MAX)
        {
            cnt++;
            total_dist += dist1[y][x];
        }
    }
    cout << cnt << " " << total_dist * 2;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dist1[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    return 0;
}
/*
5 5
EEEEE
AEAEW
WEEWW
WEEXE
WWEXA

3 3
AAA
AXA
AAA

*/