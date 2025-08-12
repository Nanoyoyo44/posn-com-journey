#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;
int lst[3]={1,2,3};

void backtrack(vector<int>& ans){
    if(ans.size()==3){
        for(auto i:ans){
            cout << i << " ";
        }
        cout << '\n';
        return ;
    }
    for (int i = 0; i < 3; i++)
    {
        bool ch=0;
        for(auto j:ans){
            if(lst[i]==j)
            ch=1;
        }
        if(ch) continue;
        ans.push_back(lst[i]);
        backtrack(ans);
        ans.pop_back();
    }
    
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    vector<int> ans;
    backtrack(ans);
    return 0;
}