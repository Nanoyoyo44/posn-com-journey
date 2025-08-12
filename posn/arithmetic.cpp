#include <bits/stdc++.h>
using namespace std;

bitset<50001> sieve;
vector<int> prime;

void find_prime(){
    sieve.set(0);
    sieve.set(1);
    for (int i = 2; i*i <= 50000; i++)
    {
        if(!sieve[i]){
            for (int j = i*i; j <= 50000; j+=i)
            {
                sieve.set(j);
            }
        }
    }
    for (int i = 2; i <= 50000; i++)
    {
        if(!sieve[i]) prime.push_back(i);
    }
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    find_prime();
    int n,d=2,sum=0,x;
    cin >> x;
    while (x--)
    {
        sum=0;    
        cin >> n;
        for(auto p:prime){
            if(p*p >n) break;
            while (n%p==0)
            {
                n/=p;
                sum++;
            }
            
        }
        
    if(n>1) sum++;
    
    cout << sum << '\n';
    }
    // for(auto p:prime){
    //     cout << p << " ";
    // }
    return 0;
}