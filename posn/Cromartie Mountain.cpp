#include <bits/stdc++.h>
using namespace std;

char show[101][101];

void draw(int n,int x,int y){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if(show[i+y+1][j+x+1]=='.'){
                if(i+j>=n && j-i<n)  show[i+y+1][j+x+1]='X';
                else if(i+j==n-1) show[i+y+1][j+x+1]='/';
                else if(j-i==n) show[i+y+1][j+x+1]='\\';
            }else{
                if((show[i+y+1][j+x+1]=='\\' && i+j==n-1) || (show[i+y+1][j+x+1]=='/' && j-i==n)) show[i+y+1][j+x+1]='v';
                else if((show[i+y+1][j+x+1]=='\\' || show[i+y+1][j+x+1]=='/') && (i+j>=n && j-i<n)) show[i+y+1][j+x+1]='X';
                // if(show[i+y+1][j+x+1]=='X')
            }
        }
            
    }
    
}

void print(int a,int b){
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << show[i][j];
        }
        cout << '\n';
    }
    
}

vector<pair<int,int>> mnt;

int main(){
    memset(show,'.',sizeof show);
    int n,mxx=INT_MIN,mxy=INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ss,posx;
        cin >> posx >> ss;
        mxx=max(mxx,2*ss+posx-1);
        mxy=max(mxy,ss);
        mnt.push_back(make_pair(posx,ss));
    }
    // draw(ss,posx-1,0);
    for(auto i:mnt){
        draw(i.second,i.first-1,mxy-i.second);
    }
    // draw(n,0,0);
    // draw(n,3,0);
    print(mxy,mxx);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2*n; j++)
    //     {
    //         if(i+j>=n && j-i<n) cout << 'X';
    //         else if(i+j==n-1) cout << '/';
    //         else if(j-i==n) cout << '\\';
    //         else cout << '.';
    //         // cout << i << ',' << j << ' ';
    //     }
    //     cout << '\n';
    // }
    

    return 0;
}

/*

3
5 6
2 4
16 3

*/