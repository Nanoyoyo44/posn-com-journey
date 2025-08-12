#include <bits/stdc++.h>
using namespace std;

int in[1001][1001];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,m,mn=INT_MAX;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> in[i][j]; 
        }
    }
    // cout << "======\n";
    for (int i = 0; i < m; i++)
    {
        mn=INT_MAX;
        for (int j = 0; j < n; j++)
        {
            mn=min(mn,in[j][i]);
            // cout << in[j][i] << " ";
        }
        cout << mn << " ";
        // cout << '\n';
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     // mn=INT_MAX;
    //     for (int j = 0; j < m; j++)
    //     {
    //         // mn=min(mn,in[j][i]);
    //         cout << in[j][i] << " ";
    //         // cout << mn << " ";
    //     }
    //     cout << '\n';
    // }
    return 0;
}