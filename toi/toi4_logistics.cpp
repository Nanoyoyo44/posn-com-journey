#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

unordered_map<char,unordered_map<char,vector<float>>> adjlist;
bool vis[100];

float findmed(vector<float>& ans){
    if(ans.size()==1){
        return ans[0];
    }
    sort(ans.begin(),ans.end());
    if(ans.size()&1){
        return ans[ans.size()/2];
    }else{
        float a = ans[ans.size()/2-1]+ans[ans.size()/2];
        return a/2;
    }
}
// a->b = w
int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        char u,v;
        float w;
        cin >> u >> v >> w;
        if(adjlist.find(u)!=adjlist.end()){
            adjlist[u][v].push_back(w);
            adjlist[v][u].push_back(w); 
        }else{
            adjlist[u][v]={w};
            adjlist[v][u]={w};
        }
    }
    vector<pair<float,pair<char,char>>> s;
    queue<int> q;
    q.push('X');
    vis[int('X')]=1;
    bool ch=0;
    // for(auto j:adjlist['X']){
    //     cout << j.first;
    // }
    while (!q.empty())
    {
        char nxt=q.front();
        q.pop();
        // cout << nxt << " ";
        if(nxt=='Y'){
            ch=1;
            break;
        }
        for(auto j:adjlist[nxt]){
            if(vis[j.first]) continue;
            // cout << j.first << ' ';
            float a=findmed(j.second);
            s.push_back({a,{nxt,j.first}});
            // for(int a:j.second) cout << a << " ";
            // cout << '\n';
            // cout << findmed(j.second) << '\n';
            q.push(j.first);
            vis[int(j.first)]=1;
        }
    }
    // cout << "---------\n";
    if(!ch){
        cout << "broken";
        return 0;
    }
    float sum=0;
    for(auto [a,node]:s){
        cout << node.first << " " << node.second  << " ";
        cout << fixed << setprecision(1) << a << '\n';
        sum+=a;
    }
    cout << sum;
    // for(auto [a,b]:adjlist){
    //     cout << a << " : ";
    //     for(auto c:b){
    //         cout << c.first << " " << accumulate(c.second.begin(),c.second.end(),0) << " "; 
    //     }
    //     cout << '\n';
    // }

    return 0;
}
/*
6
X a 1
a b 4
b a 1
b Y 3
b Y 2
Y b 6


*/