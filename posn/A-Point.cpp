#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    long long int part[601],sum=0,mx=LLONG_MIN;
    part[0]=0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        part[i]=x+part[i-1];
    }
    
    return 0;
}