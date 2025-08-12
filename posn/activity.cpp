#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long 
int main(){
    ull n,r,total=1;
    cin >> n;
    n+=n%2;
    for (int i = n-n/2+1; i <= n; i++)
    {
        total*=i;
    }
    for (int i = 2; i <= n/2; i++)
    {
        total/=i;
    }
    cout << total;
    return 0;
}