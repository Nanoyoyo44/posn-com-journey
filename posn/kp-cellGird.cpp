#include <bits/stdc++.h>
using namespace std;

int area1[100][500],area2[100][500];

int main(){
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> area1[i][j];
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum=0;
            for (int a = -1; a < 2; a++)
            {
                for (int b = -1; b < 2; b++)
                {
                    if(i+a>=0 && i+a<m && j+b>=0 && j+b<n ){
                        if(area1[i+a][j+b]==1) sum++;
                    }
                }
            }
            sum-=area1[i][j];
            // cout << sum << '\n';
            if(sum<2 && area1[i][j]) area2[i][j]=0;
            if((sum ==2 || sum == 3)&& area1[i][j]) area2[i][j]=1;
            if(sum>3 && area1[i][j]) area2[i][j]=0;
            if(sum==3 && !area1[i][j]) area2[i][j]=1;
        }
        
    }
    // cout << "================\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << area2[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}