#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> pad={{'a'},{'A','B','C'},{'D','E','F'},
                {'G','H','I'},{'J','K','L'},{'M','N','O'},
                {'P','Q','R','S'},{'T','U','V'},{'W','X','Y','Z'}
                };

void solve(int pos,string str,int n){
    // cout << str << '\n';
    if(str.empty()){
        cout << "null";
        return ;
    }else if(!n){
        cout << str;
        return;
    }
    int dx,dy,m;
    cin >> dx >> dy >> m;
    pos+=(dx+3*dy);
    if(pos>9 || pos<1||m>pad[pos-1].size()||str.empty()){
        cout << "null";
        return ;
    }else if(pad[pos-1][m-1]=='a' ){
        if(!str.empty()){
            str.pop_back();
        }
    }else{

    str+=pad[pos-1][m-1];
    }
    solve(pos,str,n-1);
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,s,m;
    cin >> n >> s >>m;
    string str="";
    str+=pad[s-1][m-1];
    solve(s,str,n-1);
    return 0;
}
/*
4
5 3
1 0 3
-1 1 3
1 -2 2

5
3 3
0 0 2
-2 0 1
2 1 3
0 1 2

*/