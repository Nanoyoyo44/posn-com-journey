#include <bits/stdc++.h>
using namespace std;


bitset<500002> p;
void find_prime()
{
    p.set(0);
    p.set(1);
    for (int i = 2; i * i < 500002; i++)
    {
        if (!p[i])
        {
            for (int j = 2; j * i < 500002; j++)
            {
                p.set(i * j);
            }
        }
    }
}

int main()
{
    find_prime();
    int n, b, sum = 0;
    cin >> n >> b;
    for (int i = 2; i <= n; i++)
    {
        if (!p[i])
            sum++;
    }
    if (b >= sum)
        sum = 0;
    else
        sum-=b;
    cout << sum;
    return 0;
}