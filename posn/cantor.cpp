#include <bits/stdc++.h>
using namespace std;

vector<int> fa;

int fac(int n){
    unsigned long long t=1;

    for (int i = 2; i <= n; i++)
    {
        t*=i;
    }
    return t;

}

void cantor(int n,int start){
    if(!n) return ;
    cantor(n/(start),start+1);
    cout << n%start;
}

int main(){
    int x,n;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n;
        cantor(n,2);
        cout << '\n';
    }
    return 0;
}