#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        q.push(i+1);
    }
    while (!q.empty())
    {
        for (int i = 0; i < 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ' ';
        q.pop();
    }
    
    return 0;
}