#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi; 

vi p(1000),ranks(1000);
void initset(int N){
    ranks.assign(N,0);
    p.assign(N,0);
    for (int i = 0; i < N; i++)
    {
        p[i]=i;
    }
}
int findset(int i){
    return (p[i]==i) ? i:(p[i]=findset(p[i]));
}

bool isSameSet(int i,int j){
    return findset(i)==findset(j);
}

void unionset(int i,int j){
    if(!isSameSet(i,j)){
        int x=findset(i),y=findset(j);
        if(ranks[x]>ranks[y]){
            p[y]=x;
        }else{
            p[x]=y;
            if(ranks[x]==ranks[y]) ranks[y]++;
        }
    }
}
int main(){

    return 0;
}