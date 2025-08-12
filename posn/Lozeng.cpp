#include <bits/stdc++.h>
using namespace std;

int main()
{
    char key;
    int w, h;
    cin >> key >> w >> h;
    for (int l = 0; l < h; l++)
    {
        for (int i = 0; i < w; i++)
        {
            for (int c = 0; c < h; c++)
            {
                for (int j = 0; j < w; j++)
                {
                    if (abs(i - w / 2) + abs(j - w / 2) <= w / 2)
                        cout << key;
                    else
                        cout << '.';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}