#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,P;
    cin >> N >> P;
    map<vector<int>,int> mp;
    vector<int> ans;
    int x;
    for (int i = 1; i <= N; i++)
    {
        vector<int> vec;
        for (int j = 0; j < P; j++)
        {
            cin >> x;
            vec.push_back(x);
        }
        mp[vec]=i;
    }
    for (int i = 0; i < P; i++)
    {
        cin >> x;
        ans.push_back(x);
    }

    if(mp.find(ans)!=mp.end()){
        cout << mp[ans];
        return 0;
    }else{
        for(auto e:mp){
            vector<int> v;
            for (int i = 0; i < P; i++)
            {
                v.push_back(ans[i]-e.first[i]);
            }
            if(mp.find(v)!=mp.end()&& mp[v]!=e.second){
                if(mp[v]>e.second) swap(mp[v],e.second);
                cout << mp[v] << " " << e.second ;
                return 0;
            }
        }
        cout << "NO";
    }
    return 0;
}
/*
3 2
1 2
3 4
5 6
1 2
*/