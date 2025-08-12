#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    vector<ll> nums(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> nums[i];
    }

    const int MAXB = 64;
    vector<vector<int>> bitCount(MAXB, vector<int>(n + 1, 0)); // use int

    for (int b = 0; b < MAXB; b++) {
        for (int i = 1; i <= n; i++) {
            bitCount[b][i] = bitCount[b][i - 1] + ((nums[i] >> b) & 1);
        }
    }

    while (q--) {
        ll l, r;
        cin >> l >> r;
        ll len = r - l + 1;
        ll ans = 0;
        for (int b = 0; b < MAXB; b++) {
            int ones = bitCount[b][r] - bitCount[b][l - 1];
            int zeros = len - ones;
            ll pairs = 1LL * ones * zeros;
            if (pairs % 2 == 1) {
                ans |= (1LL << b);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
