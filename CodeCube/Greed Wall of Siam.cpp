#include <bits/stdc++.h>
using namespace std;

int main(){
    long long sum=0;
    int bricks[100001],n,d;
    cin >> n;
    cin >> bricks[0];
    d=bricks[0];
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        bricks[i]=x;
        d=__gcd(d,x);
    }
    // cout << d;
    for (int i = 0; i < n; i++)
    {
        sum+=bricks[i]/d;
    }
    
    cout << sum;
    return 0;
}