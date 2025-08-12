#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str,key="+*^";
    cin >> str >> n;
    map<int, string> mp[5];
    for (int i = 0, j = 0, rank = 1; i < str.size(); i++)
    {
        if (str[i + 1] == '+' || i + 1 == str.size())
        {
            mp[0][rank] = str.substr(j, i - j + 1);
            rank++;
            j = i+2;
        }
    }
    for(auto [a,b]:mp[1]){
        for (int i = 0, j = 0, rank = 10; i < b.size(); i++)
        {
            if (b[i + 1] == '*' || i + 1 == b.size())
            {
                mp[1][rank] = b.substr(j, i - j + 1);
                rank+=10;
                j = i+2;
            }
        }
    }
    for (auto e : mp[1])
    {
        cout << e.first << " : " << e.second << '\n';
    }
    // for (int i = 0; i < n; i++)
    // {
    //     string order;
    //     getline(cin,order);

    // }

    return 0;
}
/*
a*b^c+d*e^f
2
1 0
2 0

*/