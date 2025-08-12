#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double r;
    cin >> r;
    while (r--)
    {
        long double re = 1, x;
        cin >> x;
        re=pow(2,x);
        cout << fixed << setprecision(0) << re << '\n';
    }
    return 0;
}