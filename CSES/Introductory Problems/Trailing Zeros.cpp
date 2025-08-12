#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,total=0;
    cin >> n;
    while(n){
        total+=n/5;
        n/=5;
    }
    cout << total;
    return 0;
}