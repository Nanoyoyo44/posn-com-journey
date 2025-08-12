#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    cin >> n;
    bool ch=1;
    for (int i = n; i >= 1; i--)
    {

        for (int k = 0; k < n - i + 1; k++)
        {

            sum = 0;
            for (int j = 1 + k; j <= k + i; j++)
            {
                // cout << j;
                sum += j;
            }
            if (sum == n )
            {
                for (int j = 1 + k; j <= k + i; j++)
                {
                    if(j!=n){
                        cout << j << ' ';
                        ch=0;
                    }
                }
            if(k!=n-i) cout << '\n';
            }
            // cout << '\n';
        }
    }
    if(ch) cout << "No";
    return 0;
}
// 12345
// 1234
// 2345
// 123
// 234
// 345
// 12
// 23
// 34
// 45
// 1
// 2
// 3
// 4
// 5
