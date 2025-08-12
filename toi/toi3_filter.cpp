#include <bits/stdc++.h>
using namespace std;

int curtain[4001];

int main(){
    int w,h,n,d50=0,d100=0;
    cin >> w >> h >> n;
    while (n--)
    {
        int x,a;
        cin >> x >> a;
        for (int i = x; i < x+a && i<w; i++)
        {
            curtain[i]++;
        }
        for (int i = 0; i < w; i++)
        {
            // cout << curtain[i] << ' ';
        }
        
    // cout << '\n';
    }
    for (int i = 0; i < w; i++)
    {
        // cout << curtain[i] << " ";
        if(curtain[i]==1) d50++;
        else if(curtain[i]==0)d100++;
    }
    cout << d100*h << " " << d50*h;
    return 0;
}
/*
7 3 3
1 2
5 3
2 2
*/