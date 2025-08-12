#include <bits/stdc++.h>
using namespace std;

void qui(int n,int key){
    if(!n) return;
    if(n%5==0){
        cout << 0 << " ";
        qui(n/5,key);
    }else if (n%5==1)
    {
        cout << 1*key << " ";
        qui(n/5,key);
    }else if (n%5==2)
    {
        cout << 2*key << " ";
        qui(n/5,key);
    }else if (n%5==3)
    {
        cout << -2*key << " ";
        qui((n+2)/5,key);
    }else if (n%5==4)
    {
        cout << -1*key << " ";
        qui((n+1)/5,key);
    }
    
}

int main(){
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int key=1,n;
        cin >> n;
        if(n<0) key=-1;
        qui(abs(n),key);
        cout << '\n';
    }
    return 0;
}