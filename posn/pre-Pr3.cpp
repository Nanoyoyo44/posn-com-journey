#include <bits/stdc++.h>
using namespace std;

bool sieve[3500001];
vector<int> prime;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    sieve[0] = 1;
    sieve[1] = 1;
    for (int i = 2; i < 3500001; i++)
    {
        if (!sieve[i])
        {
            for (int j = 2; j * i < 3500001; j++)
            {
                sieve[i * j] = 1;
            }
        }
    }
    for (int i = 2; i < 3500001; i++)
    {
        if (!sieve[i])
        {
            prime.push_back(i);
        }
    }
    // for(auto i:prime){
    //     cout << i << " ";
    // }
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n;
        int ch = 0, k = n;
        if (n == 1 || n == 0)
            cout << -1;
        else
        {
            if (n < 50000)
            {
                if (!sieve[n])
                    cout << -1;
                else
                {
                    for (auto i : prime)
                    {
                        // if(i*i>n) break;
                        if (n % i == 0)
                        {
                            n /= i;
                            if (k != n)
                                cout << i << " ";
                        }
                    }
                }
            }
            else
            {
                ch = 1;
                for (auto i : prime)
                {
                    int chk = 0;
                    // if(i*i>n) break;
                    while (n % i == 0)
                    {
                        n /= i;
                        if (!chk)
                            cout << i << " ";
                        ch = 0;
                        chk = 1;
                    }
                }
                if (ch)
                    cout << -1;
            }
        }
        cout << '\n';
    }
    return 0;
}