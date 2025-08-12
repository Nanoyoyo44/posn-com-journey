#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m,x;
    string str="";
    cin >> n >> m;
    unordered_set<int> ban;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if(i<=m){
            ban.insert(x);
        }
        str+=i+'0';
    }
    do
    {
        if(ban.find((str[0])-'0')==ban.end()){
            for(auto i:str){
                cout << i << ' ';
            }
        cout << '\n';
        }
    } while (next_permutation(str.begin(),str.end()));
}