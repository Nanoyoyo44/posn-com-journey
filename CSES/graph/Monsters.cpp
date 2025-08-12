#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;
int n,m;
vector<pii> monster;
vector<vector<int>> g;
map<pii,pii> par_mp;
pii si,se;
vector<pii> moves={{-1,0},{1,0},{0,1},{0,-1}};

bool isValid(int x,int y,int timer){
    if(x<0||y<0||x>=n||y>=m){
        return false;
    }
    if(g[x][y]<=timer){
        return false;
    }
    return true;
}

bool isEscape(int x,int y,int timer){
    if(!isValid(x,y,timer)) return false ;
    if(x==0||y==0||x==n-1||y==m-1) return true;
    return false ;
}

bool bfs_escape(){
    queue<pair<pii,int>> q;
    q.push(make_pair(si,0));
    par_mp[si]={-1,-1};
    while (!q.empty())
    {
        int cx=q.front().first.first;
        int cy=q.front().first.second;
        int timer=q.front().second;
        timer++;
        q.pop();
        for(auto mv:moves){
            int tx=cx+mv.first;
            int ty=cy+mv.second;
            if(isEscape(tx,ty,timer)){
                par_mp[{tx,ty}]={cx,cy};
                se={tx,ty};
                return true;
            }
            if(isValid(tx,ty,timer)){
                par_mp[{tx,ty}]={cx,cy};
                g[tx][ty]=timer;
                q.push({{tx,ty},timer});
            }
        }
    }
    return false ;
}

void preprocess_lava_flow(){
    queue<pair<pii,int>> q;
    for(auto m:monster){
        q.push(make_pair(m,0));
    }
    while (!q.empty())
    {
        int cx=q.front().first.first;
        int cy=q.front().first.second;
        int timer=q.front().second;
        timer++;
        q.pop();
        for(auto mv:moves){
            int tx=cx+mv.first;
            int ty=cy+mv.second;
            if(isValid(tx,ty,timer)){
                g[tx][ty]=timer ;
                q.push({{tx,ty},timer});
            }
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> n >> m;
    g.resize(n);
    for (int i = 0; i < n; i++)
    {
        g[i].resize(m);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if(c=='#'){
                g[i][j]=0;
            }else if(c=='M'){
                g[i][j]=0;
                monster.push_back({i,j});
            }else if(c=='A'){
                g[i][j]=0;
                si={i,j};
            }else{
                g[i][j]=INT_MAX;
            }
        }
    }
    
    if(si.first==0||si.second==0||si.first==n-1||si.second==m-1){
        cout << "YES\n" << "0";
        return 0;
    }
    preprocess_lava_flow();
    if(!bfs_escape()){
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    pii tmp=se;
    pii tmp1=par_mp[se];
    pii ed={-1,-1};
    vector<char> ans;
    while (tmp1!=ed)
    {
        if(tmp.second-tmp1.second==1 && tmp.first-tmp1.first==0){
            ans.push_back('R');
        }else if(tmp.second-tmp1.second==-1 && tmp.first-tmp1.first==0){
            ans.push_back('L');
        }else if(tmp.second-tmp1.second==0 && tmp.first-tmp1.first==1){
            ans.push_back('D');
        }else if(tmp.second-tmp1.second==0 && tmp.first-tmp1.first==-1){
            ans.push_back('U');
        }
        tmp=par_mp[tmp];
        tmp1=par_mp[tmp1];
    }
    reverse(ans.begin(),ans.end());
    cout << ans.size() << '\n';
    for(auto i:ans){
        cout << i ;
    }
    return 0;
}

/*
5 8
########
#M..A..#
#.#.M#.#
#M#..#..
#.######
*/