#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
bool istwopow(int s){
    return (s)&&!(s&(s-1));
}
const int MX=1e7;
bitset<MX> p;
unordered_set<int> prime;
void sieve(){
    p[0]=p[1]=1;
    for (ull i = 2; i*i<MX ; i++)
    {
        if(!p[i]){

            for (ull j = i*i; j < MX; j+=i)
            {
                p[j]=1;
            }
        }
    }
    for (ull i = 0; i < 1000; i++)
    {
        if(!p[i]) prime.insert(i);
    }
}

int main(){
    int n;
    cin >> n;
    sieve();
    for (int i = 2; i < 100; i++)
    {
        if(!p[i]) cout << i << " ";
    }
    
    // while (n--)
    // {
    //     int x;
    //     cin >> x;
    // }
    
    return 0;
}