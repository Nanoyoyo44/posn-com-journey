#include <bits/stdc++.h>
using namespace std;

int n,m;//y,x
char g[30][30];
const int dx[]={-1,-1,-1,0,0,1,1,1},dy[]={-1,0,1,1,-1,-1,0,1};

bool check(string& str,int y,int x,int dir,int index){
    if(y<0||y>=n||x<0||x>=m || index>=str.size()) return false;
    if(str[index]!=g[y][x]) return false;
    if(index==str.size()-1){
        return true;
    }
    return check(str,y+dy[dir],x+dx[dir],dir,index+1);
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int a;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
            g[i][j]=toupper(g[i][j]);
        }
    }
    cin >> a;
    vector<string> ans(a);
    for (int i = 0; i < a; i++)
    {
        cin >> ans[i];
        for(auto& j:ans[i]){
            j=toupper(j);
        }
    }
    // for(auto i:ans){
    //     cout << i << " ";
    // }
    for(auto s:ans){
        bool ch=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(g[i][j]==s[0]){
                    if(s.size()==1){
                        ch=1;
                        cout << i << " " << j << '\n';
                    }
                    for (int d = 0; d < 8; d++)
                    {
                        ch=ch||check(s,i+dy[d],j+dx[d],d,1);
                    }
                    if(ch) cout << i << " " << j << '\n';
                }           
                if(ch) break;
            }
            if(ch) break;
        }
    }
    return 0;
}
/* 
8 11
ascDEFGhigg
hTqkComPutk
FayUcompuTm
FcsierMqsrc
bkoArUePeyv
Klcbqwekumk
sreTNIophtb
yUiqlxcnBje
4
Compute
Queue
stack
Pointer

1 4
1 2
0 1
6 7
*/