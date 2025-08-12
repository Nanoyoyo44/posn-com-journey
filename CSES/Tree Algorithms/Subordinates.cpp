#include <bits/stdc++.h>
using namespace std;

const int MXN=2e5+5;

vector<int> tree[MXN];
int sub[MXN];

int dfs(int node){
    int cnt=0;
    for(auto i:tree[node]){
        cnt+=1+dfs(i);
    }
    sub[node]=cnt;
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,boss;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        cin >> boss;
        tree[boss].push_back(i);
    }
    
    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << sub[i] << " ";
    }
    
    return 0;
}
/*
5
1 1 2 3

4 1 1 0 0

*/