#include <bits/stdc++.h>
using namespace std;

bool compare(pair<float,pair<int,int>> a,pair<float,pair<int,int>> b){
    return a.first > b.first;
}

int main(){
    int n,mx[3];
    memset(mx,0,sizeof mx);
    cin >> n;
    vector<pair<float,pair<int,int>>> num;
    for (int i = 0; i < n; i++)
    {
        float s,x,y;
        cin >> x >> y;
        s=x/y;
        num.push_back(make_pair(s,(make_pair(y,i))));
    }
    sort(num.begin(),num.end(),compare);
    // for(auto i:num){
    //     cout << fixed << setprecision(2) << i.first << ' ';
    // }
    // cout << '\n';
    int sum=0;

    for (int i = 0; i < 3; i++)
    {
        sum+= (num[i].second).first;
    }
    cout << sum << '\n';
    for (int i = 0; i < 3; i++)
    {
        cout << (num[i].second).second+1 << '\n';
    }
    return 0;
}