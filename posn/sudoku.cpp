#include <bits/stdc++.h>
using namespace std;

int sudoku[9][9];

int main()
{
    string s;
    int sum = 45, t = 0;
    int n;
    cin >> n;
    for (int a = 0; a < n; a++)
    {
        t=0;
        for (int i = 0; i < 9; i++)
        {
            cin >> s;
            for (int j = 0; j < 9; j++)
            {
                sudoku[i][j] = (s[j] - '0');
            }
        }
        // cout << '\n';

        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                sum = 45;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        sum -= sudoku[y * 3 + i][x * 3 + j];
                        if (!sudoku[y * 3 + i][x * 3 + j])
                        {
                            t += (y * 3 + i + 1) * 10;
                            t += (x * 3 + j + 1) * 100;
                            // cout << "T : " << t;
                            // cout << "posx : " << y*3+i+1 << " posy : " << x*3+j+1 << '\n';
                        }
                    }
                }
                t += sum;
                // cout << sum << ' ';
            }
            // cout << '\n';
        }
        cout << t << '\n';
    }
    return 0;
}