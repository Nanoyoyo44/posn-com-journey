#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
string pipe[2];
int dp[2][5002];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        memset(dp, 0, sizeof dp);
        int k;
        cin >> k;
        for (int i = 0; i < 2; i++) {
            cin >> pipe[i];
        }

        dp[0][0] = (pipe[0][0] == '.') ? 1 : 0;  // Initialize dp[0][0] based on pipe[0][0]
        dp[1][0] = (pipe[1][0] == '.') ? 1 : 0;  // Initialize dp[1][0] based on pipe[1][0]

        int tmp0 = dp[0][0], tmp1 = dp[1][0]; // Initialize tmp0 and tmp1 with dp[0][0] and dp[1][0]

        for (int i = 1; i < k; i++) {
            if (pipe[0][i] == '#') dp[0][i] = 0;
            if (pipe[1][i] == '#') dp[1][i] = 0;

            if (pipe[0][i] == '.') {
                dp[0][i] = dp[0][i - 1];  // Use previous value for dp[0][i]
                if (pipe[1][i] == '.') dp[0][i] = (dp[0][i] + tmp1) % mod;  // Add value from tmp1 if the second pipe is free
            }

            if (pipe[1][i] == '.') {
                dp[1][i] = dp[1][i - 1];  // Use previous value for dp[1][i]
                if (pipe[0][i] == '.') dp[1][i] = (dp[1][i] + tmp0) % mod;  // Add value from tmp0 if the first pipe is free
            }

            tmp0 = dp[0][i] % mod;  // Update tmp0 for next iteration
            tmp1 = dp[1][i] % mod;  // Update tmp1 for next iteration
        }

        cout << (dp[0][k - 1] + dp[1][k - 1]) % mod << '\n';
    }

    return 0;
}
