#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
const int mx=1e9;
// bitset<mx> cp;
unordered_map<ull,bool> cp;

bool rec(ull a, ull b) {
    if (a < 0 || b < 0) return false;
    if (a == 0 && b == 0) return true;

    ull key = a * mx + b;
    if (cp.find(key) != cp.end()) return cp[key];

    bool result = false;
    if (a >= 1 && b >= 2) result = result || rec(a - 1, b - 2);
    if (a >= 2 && b >= 1) result = result || rec(a - 2, b - 1);

    return cp[key] = result;
}

void solve(){
    ull a,b;
    cin >> a >> b;
    cout << (rec(a,b) ? "YES\n":"NO\n");
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}
/*
3
2 1
2 2
3 3
*/