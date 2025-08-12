#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    string str,key;
    cin >> n >> str;
    queue<char> q,qk;
    for (int i = 0; i < n; i++)
    {
        q.push(str[i]);
    }
    qk=q;
    for (int i = 1; i <= n/2; i++)
    {
        qk.push(qk.front());
        qk.pop();
        if(q==qk && n%i==0){
            cout << i;
            return 0;
        }
    }
    cout << n ;
    
    return 0;
}