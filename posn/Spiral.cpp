#include <bits/stdc++.h>
using namespace std;

char arr[101][101];

int main()
{
    memset(arr, '.', sizeof arr);
    int n, x, y, round, key;
    char ch;
    cin >> n >> x >> y >> round >> key >> ch;
    // x--;
    // y--;
    x += 40;
    y += 40;
    if (key)
    {
        for (int i = 2; i <= round + 1; i++)
        {
            if (i % 4 == 2)
            {
                if (x < 100 && x >= 0 && y < 100 && y >= 0)
                    for (int j = x - i + 1; j < x + 1 && j < 100 && j >= 0; j++)
                        arr[j][y] = ch;
                x -= i - 1;
            }
            else if (i % 4 == 3)
            {
                if (x < 100 && x >= 0 && y < 100 && y >= 0)
                    for (int j = y; j < y + i && j < 100 && j >= 0; j++)
                        arr[x][j] = ch;
                y += i - 1;
            }
            else if (i % 4 == 0)
            {
                if (x < 100 && x >= 0 && y < 100 && y >= 0)
                    for (int j = x; j < x + i && j < 100 && j >= 0; j++)
                        arr[j][y] = ch;
                x += i - 1;
            }
            else if (i % 4 == 1)
            {
                if (x < 100 && x >= 0 && y < 100 && y >= 0)
                    for (int j = y - i + 1; j < y && j < 100 && j >= 0; j++)
                        arr[x][j] = ch;
                y -= i - 1;
            }
            // cout << i;
        }
    }
    else
    {
        for (int i = 2; i <= round + 1; i++)
        {
            if (i % 4 == 2)
            {
                for (int j = x + i - 1; j >= x && j < 100 && j >= 0; j--)
                    arr[j][y] = ch;
                x += i - 1;
            }
            else if (i % 4 == 3)
            {
                for (int j = y; j < y + i && j < 100 && j >= 0; j++)
                    arr[x][j] = ch;
                y += i - 1;
            }
            else if (i % 4 == 0)
            {
                for (int j = x - i + 1; j < x && j < 100 && j >= 0; j++)
                    arr[j][y] = ch;
                x -= i - 1;
            }
            else if (i % 4 == 1)
            {
                for (int j = y - i + 1; j < y && j < 100 && j >= 0; j++)
                {
                    arr[x][j] = ch;
                    // cout << x << ',' << j << '\n';
                }
                y -= i - 1;
            }
            // cout << i;
        }
    }

    for (int i = 40; i < 40 + n; i++)
    {
        for (int j = 40; j < 40 + n; j++)
        {
            cout << arr[j][i];
        }
        cout << '\n';
    }
    return 0;
}