#include <bits/stdc++.h>
using namespace std;

// int x=450001;

bool sieve[500001];

void find_prime(){
    sieve[0]=sieve[1]=1;
    for (int i = 2; i <= sqrt(500000); i++)
    {
        if(!sieve[i]){
            for (int j = i*i; j <= 500001; j+=i)
            {
                sieve[j]=1;
            }   
        }
    }
    return;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,k1,round,ss=0;
    queue<int> prime;

    find_prime();

    cin >> n >> k1 >> round;
    for (int i = 2; i <= n; i++)
    {
        if(!sieve[i]){
            prime.push(i);
            ss++;
        }
    }
    while (prime.front()!= k1)
    {
        prime.push(prime.front());
        prime.pop();
    }

    int count=0;

    for (int i = 0; i < round; i++)
    {
        int c;
        cin >> c;
        // cout << cc << '\n';
        if(sieve[c] && c!=2){
            cout << -1 << '\n';
            continue;
        }else{
            while (prime.front()!=c)
            {
                count%=ss;
                count++;
                prime.push(prime.front());
                prime.pop();
            }
        }
        if((count+1)%ss==0) cout <<ss << '\n';
        else cout << (count+1)%ss << '\n';
    }
    return 0;
}