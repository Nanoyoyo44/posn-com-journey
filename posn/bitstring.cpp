#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    string sub;
    cin >> sub;

    int total = 1 << (n-1);  // Precompute 2^(n-1)
    int sub_len = sub.length();

    for (int i = 0; i < total; i++) {
        string str;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                str += '1';
            } else {
                str += '0';
            }
        }

        // Check both the original and complemented pattern
        if (str.find(sub) != string::npos) ans++;

        // Complemented string check (bitwise NOT of str)
        string str_complement;
        for (char ch : str) {
            str_complement += (ch == '1') ? '0' : '1';
        }
        if (str_complement.find(sub) != string::npos) ans++;
    }

    cout << ans;
    return 0;
}
