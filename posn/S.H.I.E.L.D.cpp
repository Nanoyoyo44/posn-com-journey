#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char c;
    cin >> c >> n;
    for (int  i = 0; i < 2*n+1; i++)
    {
        for (int j = 0; j < 2*n+1; j++)
        {
            if(i==j || i==-j+2*n || i==n || j == n) cout << '+';
            else if(abs(i-n)+abs(j-n)<=n) cout << c;
            else cout << '.';
        }
        cout << '\n';
    }
    
    return 0;
}