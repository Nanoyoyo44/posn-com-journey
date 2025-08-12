#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c,result=1;
    cin >> a >> b >> c;
    while (b)
    {
        if(b%2){
            result*=a;
            result%=c;
        } 
        a*=a;
        a%=c;
        b/=2;
    }
    cout << result;
    return 0;
}