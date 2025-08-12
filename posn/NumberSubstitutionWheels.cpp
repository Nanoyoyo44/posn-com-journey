#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> a;
    queue<int> b;
    queue<int> c;
    for (int i = 1; i <= 9; i++)
    {
        a.push(i);
        b.push(i);
        c.push(i);
    }
    string n , key ;
    cin >> key >> n;
    for (int i = 0; i < (key[0] - '0') - 1; i++)
    {
        a.push(a.front());
        a.pop();
    }
    for (int i = 0; i < (key[1] - '0') - 1; i++)
    {
        b.push(b.front());
        b.pop();
    }
    for (int i = 0; i < (key[2] - '0') - 1; i++)
    {
        c.push(c.front());
        c.pop();
    }
    int x, y, z, ans;
    for (int j = 0; j < n.size(); j++)
    {

        for (int i = 0; i < n[j] - '0' - 1; i++)
        {
            a.push(a.front());
            a.pop();
        }
        x = a.front();
        for (int i = 0; i < 9 - (n[j] - '0' - 1); i++)
        {
            a.push(a.front());
            a.pop();
        }

        for (int i = 0; i < x - 1; i++)
        {
            b.push(b.front());
            b.pop();
        }
        y = b.front();
        for (int i = 0; i < 9 - (x - 1); i++)
        {
            b.push(b.front());
            b.pop();
        }

        for (int i = 0; i < y - 1; i++)
        {
            c.push(c.front());
            c.pop();
        }
        ans = c.front();
        for (int i = 0; i < 9 - (y - 1); i++)
        {
            c.push(c.front());
            c.pop();
        }
        // cout << x << ' ';
        // cout << y << ' ';
        cout << ans;
        for (int i = 0; i < key[0] - '0'; i++)
        {
            a.push(a.front());
            a.pop();
        }
        for (int i = 0; i < 8; i++)
        {
            b.push(b.front());
            b.pop();
        }
        for (int i = 0; i < key[2] - '0'; i++)
        {
            c.push(c.front());
            c.pop();
        }
        // cout << a.front() << b.front() << c.front();
    }
    return 0;
}