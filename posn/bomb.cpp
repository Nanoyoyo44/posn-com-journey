#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

bool compare(pii& a,pii& b){
    if(a.first==b.first) return a.second<b.second;
    return a.first > b.first;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second ;
    }
    sort(v.begin(),v.end(),compare);
    int a=-1;
    // cout << "\n";
    // for(auto [x,y]:v){
    //     cout << x << " " << y << '\n';
    // }
    for(auto [x,y]:v){
        if(y>=a){
            a=y;
            cout << x << " " << y << '\n';
        }
    }
    return 0;
}
/*
5
9 1
8 2
7 3
6 4
5 5 
*/