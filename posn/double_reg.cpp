#include <bits/stdc++.h>
using namespace std;

char show[1001][1001];

int main(){
    memset(show,'_',sizeof show);
    int startx[3],starty[3],x[3],y[3];
    int areax=0,areay=0;
    for (int i = 0; i < 2; i++)
    {
        cin >> startx[i] >> starty[i] >> x[i] >> y[i];
        areax=max(startx[i]+x[i],areax);
        areay=max(starty[i]+y[i],areay);
    }
    for (int l = 0; l < 2; l++)
    {
        for (int i = startx[l]; i < startx[l]+x[l]; i++)
        {
            for (int j = starty[l]; j < starty[l]+y[l]; j++)
            {
                if(show[j][i]=='o')show[j][i]='x';
                else show[j][i]='o';
            }
        }
    }
    for (int i = 0; i < areay; i++)
    {
        for (int j = 0; j < areax; j++)
        {
            cout << show[i][j] << " " ;
        }
        cout << '\n';
    }
    
    
    
    return 0;
}