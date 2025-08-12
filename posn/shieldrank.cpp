#include <bits/stdc++.h>
using namespace std;

int main(){
    char key;
    int n,m;
    cin >> key >> n >> m;
    for (int i = 0; i < (2*n+1)*m; i++)
    {
        for (int j = 0; j < (2*n+1)*m; j++)
        {
            if(i==j || i+j==(2*n+1)*m-1) cout << '#' ;
            else if(i%(2*n+1)+j%(2*n+1)==2*n || i%(2*n+1)-j%(2*n+1)==0 ||i%(2*n+1)==n ||j%(2*n+1)==n) cout <<'+';
            else if(abs(i%(2*n+1)-n)+abs(j%(2*n+1)-n)<=n) cout <<key;
            else cout << ".";
        }
        cout << '\n';
    }
    return 0;
}