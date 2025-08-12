#include <bits/stdc++.h>
using namespace std;

int n;
int dist[1000][1000];
int memo[1000][1000];

int tsp(int pos,int bitmask){
    if(bitmask==(1<<n)-1){
        return dist[pos][0];
    }
    if(memo[pos][bitmask]!=-1){
        return memo[pos][bitmask];
    }
    int ans=9e9;
    for (int nxt = 0; nxt <= n; nxt++)
    {
        if(nxt!=pos&&!(bitmask&(1<<nxt))){
            ans=min(ans,dist[pos][nxt]+tsp(pos,bitmask|(1<<nxt)));
        }
    }
    return memo[pos][bitmask]=ans;
    
}

int main(){

    return 0;
}