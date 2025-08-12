#include <bits/stdc++.h>
using namespace std;

int sum(int k){
    int s=0;
    while (k>=1)
    {
        s+=tree[k];
        k-=k&-k;
    }
}
void add(int k,int x){
    while(k<=n){
        tree[k]+=x;
        k+=k&-k;
    }
}

int main(){
    int temp;
    for (int i = 1; i <= 8; i++)
    {
        cin >> temp;
        data[i]=temp;
        add(i,temp);
    }
    

    return 0;
}