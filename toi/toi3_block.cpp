#include <bits/stdc++.h>
using namespace std;

char grid[10][10];
int n,m;

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int y,x;
        char dir;
        cin >> y >> x >> dir;
        if(dir=='L'){
            
        }else{

        }
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

*/