#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x=1,y=1;
        string a,b;
        cin >> a >> b;
        for(auto i:a){
            if(i=='X') x+=3;
            else if(i=='L') x+=2;
            else if(i=='M') x++;
            else if(i=='S') x*=-1;
        }
        for(auto i:b){
            if(i=='X') y+=3;
            else if(i=='L') y+=2;
            else if(i=='M') y++;
            else if(i=='S') y*=-1;
        }
        // cout << x <<',' << y;
        if(x>y){
            cout << ">";
        }else if (x==y)
        {
            cout << "=";
        }else{
            cout  << "<";
        }
        cout << '\n';
        
    }
    
    return 0;
}