#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    char c=str[0];
    unsigned long long int cnt=0, n=str.size(),mx=0;
    for(auto i:str){
        if(c==i){
            // cout << i;
            cnt++;
        }else{
            c=i;
            cnt=1;
        }
        mx=max(cnt,mx);
        
    }
    cout << mx ;
    return 0;
}