#include <bits/stdc++.h>
using namespace std;

bitset<20000001> sieve;
bitset<20000001> chen;

void find_prime()
{
    for (int i = 2; i <= sqrt(20000000); i++)
    {
        if (!sieve[i])
        {
            for (int j = i * i; j < 20000000; j += i)
            {
                sieve.set(j);
            }
        }
    }
}


void find_chen()
{
    for (int i = 2; i <= 20000000; i++)
    {
        if(!sieve[i]){
            if(!sieve[i+2] && i+2<=20000000) chen.set(i);
            for (int j = 2; j*i <= 20000000; j++)
            {
                if(!sieve[j] ){
                    if(!sieve[i*j-2]) chen.set(i*j-2);
                }
            }
            
        }
    }
    
}

int main()
{
    sieve[0] = 1;
    sieve[1] = 1;
    // chen[1]=1;
    // chen[0]=1;
    find_prime();
    find_chen();
    int start=2, end=10, sum = 0;
    cin >> start >> end;
    for (int i = start ; i <= end; i++)
    {
        if(chen[i]) sum++;
    }
    
    cout << sum;
    return 0;
}