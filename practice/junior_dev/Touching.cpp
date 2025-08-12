#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int r,m,n;
    string key;
    cin >> key >> r >> n >> m;
    int rr=r-3;
    if(key=="MisterO"){
        for (int i = 0; i < (2*r+1)*n; i++)
        {
            for (int j = 0; j < (2*r+1)*m; j++)
            {
                int x=j%(2*r+1);
                int y=i%(2*r+1);
                if(abs(y-r)+abs(x-r)==2*r-3||abs(y-r)+abs(x-r)==2*r-2 || y==0 && abs(y-r)+abs(x-r)<=2*r-2 || y== 2*r && abs(y-r)+abs(x-r)<=2*r-2 || x==0 && abs(y-r)+abs(x-r)<=2*r-2 ||x== 2*r && abs(y-r)+abs(x-r)<=2*r-2 || y== r-rr && x>=r-rr &&x<=r+rr || y== r+rr && x>=r-rr &&x<=r+rr || x== r-rr && y>=r-rr &&y<=r+rr|| x== r+rr && y>=r-rr &&y<=r+rr) cout << "*";
                else if(abs(y-r)+abs(x-r)<=2*r-3 && (y==x || y==-x+2*r)) cout << "#";
                else if(x==r) cout << "|";
                else if(y==r) cout << "-";
                else cout << ".";
            }
            cout << '\n';
        }
    }else if(key=="Pasit"){
        for (int i = 0; i < (2*r+1)*n; i++)
        {
            for (int j = 0; j < (2*r+1)*m; j++)
            {
                int x=(j-i/(2*r+1))%(2*r+1);
                int y=i%(2*r+1);
                if(abs(y-r)+abs(x-r)==2*r-3||abs(y-r)+abs(x-r)==2*r-2 || y==0 && abs(y-r)+abs(x-r)<=2*r-2 || y== 2*r && abs(y-r)+abs(x-r)<=2*r-2 || x==0 && abs(y-r)+abs(x-r)<=2*r-2 ||x== 2*r && abs(y-r)+abs(x-r)<=2*r-2 || y== r-rr && x>=r-rr &&x<=r+rr || y== r+rr && x>=r-rr &&x<=r+rr || x== r-rr && y>=r-rr &&y<=r+rr|| x== r+rr && y>=r-rr &&y<=r+rr) cout << "*";
                else if(abs(y-r)+abs(x-r)<=2*r-3 && (y==x || y==-x+2*r)) cout << "#";
                else if(x==r) cout << "|";
                else if(y==r) cout << "-";
                else cout << ".";
            }
            cout << '\n';
        }
    }else{
        for (int i = 0; i < (2*r+1)*n; i++)
        {
            for (int j = 0; j < (2*r+1)*m; j++)
            {
                int x=(j+i/(2*r+1))%(2*r+1);
                int y=i%(2*r+1);
                if(abs(y-r)+abs(x-r)==2*r-3||abs(y-r)+abs(x-r)==2*r-2 || y==0 && abs(y-r)+abs(x-r)<=2*r-2 || y== 2*r && abs(y-r)+abs(x-r)<=2*r-2 || x==0 && abs(y-r)+abs(x-r)<=2*r-2 ||x== 2*r && abs(y-r)+abs(x-r)<=2*r-2 || y== r-rr && x>=r-rr &&x<=r+rr || y== r+rr && x>=r-rr &&x<=r+rr || x== r-rr && y>=r-rr &&y<=r+rr|| x== r+rr && y>=r-rr &&y<=r+rr) cout << "*";
                else if(abs(y-r)+abs(x-r)<=2*r-3 && (y==x || y==-x+2*r)) cout << "#";
                else if(x==r) cout << "|";
                else if(y==r) cout << "-";
                else cout << ".";
            }
            cout << '\n';
        }
    }
    return 0;
}
/*
MisterO
5
3 2

*/