#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        q.push(i+1);
    }
    while (!q.empty())
    {
        for (int i = 0; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ' ';
        q.pop();
    }
    Longest Flight Route
    return 0;
}