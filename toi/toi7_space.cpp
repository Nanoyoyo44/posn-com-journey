#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;


void print(int u,int siz){
    for (int i = siz-1; i >=0 ; i--)
    {
        cout << (bool)(u&(1<<i));
    }
    // cout << " ";
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int d;
    cin >> d;
    map<int,int> mp;
    for (int u = 0; u < (1<<d); u++)
    {
        for (int i = 0; i < d; i++)
        {
            int v=u^(1<<i);
            if(mp[v]>=d||mp[u]>=d) continue;
            mp[u]++;
            mp[v]++;
            print(u,d);
            cout << " ";
            print(v,d);
            cout << '\n';
        }
    }
    // for(auto [a,b]:mp){
    //     print(a,d);
    //     cout  << " " << b << '\n';
    // }
    return 0;
}