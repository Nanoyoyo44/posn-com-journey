#include <bits/stdc++.h>
using namespace std;

int main(){
    int w,h;
    char ch;
    cin >> ch >> w >> h;
    for (int  l = 0; l < h; l++)
    {
        
        for (int i = 0; i < w; i++)
        {
            for (int  ll = 0; ll < w*(h-l-1); ll++)
            {
                cout << '.';
            }
            for (int c = 0; c <= l; c++)
            {
                
                for (int  j = 1; j < w-i; j++)
                {
                    cout << '.';
                }
                
                for (int j = 0; j <2*i+1; j++)
                {
                    cout << ch;
                }

                for (int  j = 1; j <= w-i; j++)
                {
                    cout << '.';
                }
            }
            for (int  ll = 0; ll < w*(h-l-1); ll++)
            {
                cout << '.';
            }
            cout << '\n';
        }
    }
    
    return 0;
}