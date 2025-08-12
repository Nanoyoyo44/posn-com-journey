#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int x,n,mn=INT_MAX,sum1=0,sum2=0;
    ll nums[10001][3];
    cin >> n;

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < n; i++)
        {
        
            cin >> nums[i][j]; 
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            sum1=0;
            sum2=0;
            for (int j = k; j <= n-i+k; j++)
            {
                cout << j+1 << " ";
                sum1+=nums[j][0];
                sum2+=nums[j][1];
            }
            cout << " : " << sum1*sum1+sum2*sum2 << '\n';
            // cout << '\n';
            mn=min(mn,sum1*sum1+sum2*sum2);
        }
    }
    
    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < 2; i++)
    //     {

    //         cout << nums[j][i] << " "; 
    //     }
    //     cout << '\n';
    // }
    
    cout << mn;
    return 0;
}

/*
6
5 2 -8 1 8 9
1 9 3 -13 6 0

6
2 -3 -2 2 3 1
4 -4 -3 -4 0 2

*/