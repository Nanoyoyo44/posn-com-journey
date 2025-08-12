#include <bits/stdc++.h>
using namespace std;

int arr[10000][10000];

int main()
{
    int a,b;
    int n, m,x=0,y=0,c, count = 1;
    cin >> n >> m >> c;
    for (int i = 0; i < c; i++)
    {
        char a;
        cin >> a;
        if(a=='U') y++;
        if(a=='D') y--;
        if(a=='R') x++;
        if(a=='L') x--;
    }
    
    for (int i = 500; i < n + 500; i++)
    {
        for (int j = 500; j < m + 500; j++)
        {
            arr[i][j] = count;
            count++;
        }
    }
    for (int y = -1; y < 2; y++)
    {
        for (int x = -1; x < 2; x++)
        {
            for (int i = 500; i < n + 500; i++)
            {
                for (int j = 500; j < m + 500; j++)
                {
                    arr[i+y*n][j + x*m] = arr[i][j];
                }
            }
        }
    }
    for (int i = 500+y; i < n + 500+y ; i++)
    {
        for (int j = 500-x; j < m + 500-x; j++)
        {
            if(i==500+y && j == 500-x) a=arr[i][j];
            if(i==n+500+y-1 && j == m+500-x-1) b=arr[i][j];
        }
    }
    cout << a << " " << b;
    return 0;
}