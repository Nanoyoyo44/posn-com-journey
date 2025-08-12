#include <bits/stdc++.h>
using namespace std;

bool show[1001][1001];

int main()
{
    int n, posx, posy, r;
    cin >> n >> posx >> posy >> r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (pow((i - posy), 2) + pow(j - posx, 2) <= r * r)
            {
                show[j][i] = 1;
            }
            else
            {
                show[j][i] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << show[i][j] << '_';
        }
        cout << '\n';
    }

    return 0;
}