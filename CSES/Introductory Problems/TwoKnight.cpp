#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull ;

int main(){
    int n;
    cin >> n;
    cout << 0 << '\n';
    for (ull i = 2; i <= n; i++)
    {
        ull all = i*i*(i*i-1)/2;
        ull atk = 4*(i-1)*(i-2);
        ull result = all-atk;
        cout << result << '\n';
    }
    
    return 0;
}