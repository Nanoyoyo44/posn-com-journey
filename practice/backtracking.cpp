#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;
int lst[3]={1,2,3};
int n=3;
void backtracking(int i,vector<int>& ans){
    if(i==n){
        cout << "list : ";
        for(auto i:ans){
            cout << i << ',';
        }
        cout << '\n';
        return ;
    }
    backtracking(i+1,ans);
    ans.push_back(lst[i]);
    backtracking(i+1,ans);
    ans.pop_back();
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    vector<int> ans;
    backtracking(0,ans);
    return 0;
}