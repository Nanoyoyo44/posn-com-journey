#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char ch;
    cin >> n >> ch;
    // n++;
    for (int i = 0; i < (n+1)/2; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if(i>=j||i>=-j+n-1) cout << ch;
            else cout << ' ';
        }
        cout << '\n';
    }
    for (int i = n/2-1; i >=0 ; i--)
    {
        for (int  j = 0; j < n; j++)
        {
            if(i>=j||i>=-j+n-1) cout << ch;
            else cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}