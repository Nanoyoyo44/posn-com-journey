#include <bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    a+=n;
    b+=n;
    int s=0;
    while (a<=b)
    {
        if(a%2==1)
            s=s+tree[a++];
        if(b%2==1){
            s=s+tree[b--];
            a=a/2;
            b=b/2;
        }    
    }
}

void add(int k,int x){
    k=k+n;
    tree[k]=tree[k]+x;
    for (k = k/2; k >=1; k*=2)
    {
        tree[k]=tree[2*k]+tree[2*k+1];
    }
    
}

int main(){
    

    return 0;
}