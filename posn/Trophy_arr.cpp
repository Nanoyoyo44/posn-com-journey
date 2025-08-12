#include <bits/stdc++.h>
using namespace std;

char show[10001][10001];

int main()
{
    int a = 0, b = 0;//a = axis x ,b = axis y 
    string str = "Trophy";
    int h = 3, n = str.size();
    for (int c = 0; c < n; c++)
    {
        for (int i = 0; i < h; i++)
        {
            for (int cc = 0; cc < c * h; cc++)
            {
                show[a][b] = '.';
                a++;
            }
            for (int l = 0; l < n - c; l++)
            {
                for (int j = 0; j < i; j++)
                {
                    show[a][b] = '.';
                    a++;
                }
                for (int j = 0; j < 2 * (h - i) - 1; j++)
                {
                    show[a][b] = str[c];
                    a++;
                }
                for (int j = 0; j <= i; j++)
                {
                    show[a][b] = '.';
                    a++;
                }
            }
            for (int cc = 0; cc < c * h; cc++)
            {
                show[a][b] = '.';
                a++;
            }
            // cout << '\n';
            show[a][b]='\n';
            b++;
            a=0;
            for (int ss = 0; ss < 2 * h * n; ss++)
            {
                show[a][b] = '.';
                a++;
            }
            // cout << '\n';
            show[a][b]='\n';
            b++;
            a=0;
        }
    }
a=2*h*n;
    cout << a << '\n' << b << '\n';

    for(int i=0;i<a;i++){
        for(int j=0;j<b-1;j++){
            cout << show[i][j];
        }
        cout << '\n';
    }
    return 0;
}