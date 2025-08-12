#include <bits/stdc++.h>
using namespace std;

string str;

void solve(int n,string key){
    if(n<=0){
        if(n<0) return ;
        for (int i = 0; i+1 < key.size(); i+=2)
        {
            cout << key[i] << key[i+1] << '\n';
        }
        
        cout << "E\n";
        return ;
    }
    solve(n-1,key+"--");
    solve(n-2,key+"||");
    
    
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    solve(n,str);
    return 0;
}