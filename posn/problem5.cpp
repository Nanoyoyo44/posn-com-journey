#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n,x1=1,y1=1,result1=0,result2=0,i=3,j=4,x2,y2;
    cin >> i >> j >> n;
    x2=i;
    y2=j;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if(c=='U') {
            y1++;
            x2-=(j);
        }
        if(c=='R') {
            x1+=j-1;
            // x2+=j-1;
        }
        if(c=='D') {
            y1--;
            // y2--;
        }
        if(c=='L') {
            y1-=i-1;
            // y2-=i-1;
        }
    }
    
    x1--;
    y1--;
    result1+=x1;
    result1%=j;
    result1++;
    result1+=y1*j;
    result1%=(i*j+1);
    

    x2--;
    y2--;
    result2+=y2;
    result2%=j;
    result2++;
    result2+=x2*j;
    result2%=(i*j+1);
    cout << result1 << ' ';
    cout << result2 << ' ';
    return 0;
}