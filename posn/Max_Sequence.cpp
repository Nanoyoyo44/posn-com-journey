#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,s=0;
    cin >> n;
    vector<int> sum(n+2,0), num(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        num[i]=s;
        sum[i]+=sum[i-1]+s;
        cout << sum[i] << ' ';
    }
    
    return 0;
}