#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> player;
    int n,a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        player.push_back(make_pair(b,a));
    }
    sort(player.begin(),player.end(),[](const pair<int,int> a,const pair<int,int> b){
        return a.first > b.first;
    });
    cout << player[player.size()-2].second << " " << player[player.size()-2].first;
    return 0;
}