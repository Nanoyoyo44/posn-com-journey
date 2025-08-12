#include <bits/stdc++.h>
using namespace std;

bool sieve[300001];
vector<int> prime;

void find_prime()
{
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i <= sqrt(300000); i++)
    {
        if (!sieve[i])
        {
            for (int j = i * i; j < 300000; j += i)
            {
                sieve[j] = 1;
            }
        }
    }
    for (int i = 0; i < 300000; i++)
    {
        if (!sieve[i])
            prime.push_back(i);
    }
}

int main()
{
    int i = 0, n, sum = 0, x;
    find_prime();
    cin >> x;
    for (int j = 0; j < x; j++)
    {
        sum = 0;
        cin >> n;
        i=0;
        while (1)
        {
            if (!sieve[n - prime.at(i)] && n > prime.at(i))
            {
                // cout << prime[i] << " " << n-prime[i] << '\n';
                sum++;
            }
            i++;
            if (prime.at(i) * 2 > n)
                break;
        }
        cout << sum << '\n';
    }
    // for(auto i:prime) cout << i << " ";
    return 0;
}