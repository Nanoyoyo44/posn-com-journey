#include <bits/stdc++.h>
using namespace std;

bitset<1000001> sieve;
vector<int> prime;
void find_prime(){
    sieve[0]=1;
    sieve[1]=1;
    for (int i = 2; i < sqrt(1000000); i++)
    {
        if(!sieve[i]){
            for (int j = i*i; j < 1000000; j+=i)
            {
                sieve.set(j);
            }
        }
    }
    for (int i = 2; i < 1000000; i++)
    {
        if(!sieve[i]){
            prime.push_back(i);
        }
    }
    
    
}

int arr[1001][1001];

int main(){
    int n,sum=0;
    find_prime();
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }   
    }
    // for(auto i:prime) cout << i << " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j || j==-i+n-1){
                if(!sieve[arr[i][j]]) {
                    sum+=arr[i][j];
                    // cout << arr[i][j] << " ";
                }
            }
        }
        // cout <<'\n';
    }
    cout << sum;
    return 0;
}