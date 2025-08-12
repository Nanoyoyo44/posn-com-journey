#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int x[200001],y[200001],mn=INT_MAX;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        mn=min(abs(x[i])+abs(y[i]),mn);
    }
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(abs(x[i])+abs(y[i])==mn) cnt++;
    }
    cout << mn*2 << ' ' << cnt;

    return 0;
}   