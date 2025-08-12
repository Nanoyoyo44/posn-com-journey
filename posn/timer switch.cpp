#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int sum=0, n;
    string str,key;
    cin >> n >> str;
    key=str;
    str+=str;
    for (int i = 1; i <=n; i++)
    {
        if(str.substr(i,n) == key){
            cout << i ;
            break;
        }
    }
    
    return 0;
}