#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    int h,n;
    cin >> ch >> h >> n;
    for (int j = 0; j < h; j++)
    {
            for(int i=0;i<h;i++){
                if((i+j)%n==0)cout <<ch;
                else cout << '.';
        }
        cout << '\n';
    }
    return 0;
}