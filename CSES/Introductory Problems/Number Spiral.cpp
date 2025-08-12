#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long re=0,mx=0,t,x,y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        mx=max(x,y);
        if(mx==y){
            if(y%2) re=y*y-x+1;
            else re= y*y-2*y+x+1;
        }else{//mx==x
            if(x%2) re= x*x-2*x+y+1;
            else re=x*x-y+1;;
        }
        cout << re << '\n';
    }
    return 0;
}