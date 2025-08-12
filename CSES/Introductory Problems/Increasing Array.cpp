#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long sum=0,a=0,b=0;
    int n;
    cin >> n >> a;
    for (int i = 0; i < n-1; i++)
    {
        cin >> b;
        if(a>=b) sum+=a-b;
        if(b>a) a=b;
    }
    cout << sum;
    return 0;
}