#include<bits/stdc++.h>
using namespace std;

int fib[50];

int fibo(int n){
    if(n<=1) return n;
    if(fib[n]) return fib[n];
    else{
        fib[n]=(fibo(n-1)+fibo(n-2));
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    memset(fib,0,sizeof fib);
    int n;
    cin >> n;
    fib[1]=1;
    cout <<fibo(n);
    return 0;
}