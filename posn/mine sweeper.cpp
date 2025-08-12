#include <bits/stdc++.h>
using namespace std;

char show[101][101];
int total = 0;
void find_path(int posx, int posy, int n)
{
    if (posx >= n || posx < 0 || posy >= n || posy < 0 || (show[posx][posy] >= '0' && show[posx][posy] <= '8'))
        return;
    int sum = 0;
    if (!(show[posx][posy] >= '0' && show[posx][posy] <= '8'))
    {
        for (int i = -1; i < 2; i++)
        {
            for (int j = -1; j < 2; j++)
            {
                if (!(posx + i >= n || posx + i < 0 || posy + j >= n || posy + j < 0))
                {
                    if (show[posx + i][posy + j] == '*')
                    {
                        sum++;
                    }
                }
            }
        }
        if (sum)
        {
            // cout << posx <<"," << posy <<" : " <<sum<< '\n';
            show[posx][posy] = char(sum + '0');
            // total+=sum;
            return;
        }
    }
    for (int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            if (!(posx + i >= n || posx + i < 0 || posy + j >= n || posy + j < 0) && !(show[posx][posy] >= '0' && show[posx][posy] <= '8'))
            {
                if (show[posx + i][posy + j] != 'o')
                {
                    show[posx + i][posy + j] = 'o';
                    find_path(posx + i, posy + j, n);
                }
            }
        }
    }
}

int main()
{
    int n, posx, posy;
    cin >> n >> posx >> posy;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> show[j][i];
        }
    }
    find_path(posx - 1, posy - 1, n);
    show[posx - 1][posy - 1] = 'X';
    // cout << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << show[j][i];
            if (show[j][i] >= '0' && show[j][i] <= '9')
            {
                total += show[j][i] - '0';
            }
        }
        // cout << '\n';
    }
    cout << total;
    return 0;
}
/*

10
3 7
.........*
*....*....
..*..*....
....*...**
.***......
.........*
.......*..
......**..
..*.......
*...*.**..

*/