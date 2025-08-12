//LANG : C++
#include <bits/stdc++.h>
using namespace std;
string s,str;
int ans = 0;

void rec(int n , int cnt){
    if(cnt==n){
        cout << s << endl ;
        if (s.find(str)!=-1){
            ans++;
        }
        return ;
    }
    s+='0';
    rec(n,cnt+1);
    s.pop_back();

    cout <<"pop1" << '\n';
    
    s+='1';
    rec(n,cnt+1);
    s.pop_back();

    cout <<"pop2" << '\n';
}

int main(){
    int n ; 
    cin >> n ;
    cin >> str ;
    rec(n,0);
    //cout << ans ;

    return 0 ;
}