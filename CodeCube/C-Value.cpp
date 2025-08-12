#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, c = 0, mn = INT_MAX;
    cin >> n;
    int nums[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int b = 1; b <= n; b++)
    {

        for (int a = 1; a <= b; a++)
        {
            c = 0;
            for (int i = 0, j = 0; i < n; i++, j++)
            {
                if (i == a ){
                    // cout << 0 << ' ';
                    j++;
                    }
                
                if (i == b ){
                    // cout << 0 << ' ';
                    j++;}
                    
                if (j % 2)
                {
                    c += nums[i];
                    // cout << nums[i] << ' ';
                }
                else
                {
                    c -= nums[i];
                    // cout << -nums[i] << ' ';
                }
            }
            // cout << c;
            mn = min(mn, c);
            // cout << '\n';
        }
    }

    cout <<  mn;
    return 0;
}
/*
3
2 1 5

3
3 4 8 // 1
*/