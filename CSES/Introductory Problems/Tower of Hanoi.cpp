#include <bits/stdc++.h>
using namespace std;

stack<int> l;
stack<int> m;
stack<int> r;

int main(){
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        l.push(i);
    }
    while (r.size()==n)
    {
        if(n%2){
            r.push(l.front());
            l.pop();    
        }
    }
    
    return 0;
}