#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int a,sum=0;
        cin >> a;
        for (int i = 1; i*i <= a; i++)
        {
            if(a%i==0){
                sum++;
                if(i!=a/i) sum++;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}   