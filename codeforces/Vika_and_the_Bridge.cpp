#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> color(n);
        map<int,vector<int>> color_pos;
        for (int i = 0; i < n; i++)
        {
            cin >> color[i];
            color_pos[color[i]].push_back(i);
        }

    }
    return 0;
}
/*

1
5 2
1 1 2 1 1


7 3
1 2 3 3 3 2 1
6 6
1 2 3 4 5 6
8 4
1 2 3 4 2 3 1 4
3 1
1 1 1

output :
0
1
2
2
0

*/