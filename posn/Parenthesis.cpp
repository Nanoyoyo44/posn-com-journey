#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool ch=1;
        stack<char> a;
        stack<char> b;
        string c;
        cin >> c;
        for (int i = 0; i < c.size(); i++)
        {
            if(c[i]=='('){
                a.push('(');
            }
            if(c[i]=='['){
                b.push('[');
            }
            if(c[i]==']'){
                b.pop();
            }
            if(c[i]==')'){
                a.pop();
            }
            if(i==c.size()-1){
                if(a.empty() && b.empty()) cout << "Yes\n";
                else cout << "No\n"; 
                break;
            }
        }
    }
    return 0;
}