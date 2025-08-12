#include <bits/stdc++.h>
using namespace std;

char show[3201][3201];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    string str;
    cin >> str;
    int n = str.size(), a = 0, b = 0, id = 0;
    for (int c = 0; c < n; c++)
    {

        for (int i = 0; i < n; i++)
        {
            id = 0;
            for (int j = 0; j < n * c; j++)
            {
                show[a][b] = '.';
                a++;
            }
            for (int l = 0; l < n - c; l++)
            {
                for (int j = 0; j < 2 * n; j++)
                {
                    if (i + j < 2 * n - 1 && i <= j)
                        show[a][b] = str[id];
                    else
                        show[a][b] = '.';
                    a++;
                    // cout << i<< "," << j << " ";
                }
                id++;
            }
            for (int j = 0; j < n * c; j++)
            {
                show[a][b] = '.';
                a++;
            }
            // cout << '\n';
            b++;
            a = 0;
        }
    }
    for (int i = 0; i < 2 * n * n; i++)
    {
        for (int j =  n * n - 1; j >= 0; j--)
        {
            cout << show[i][j];
        }
        cout << '\n';
    }
    return 0;
}