#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(){
    int n,sum=0,mx=INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n==4){
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }
        cout << sum;
        return 0;
    }
    for (int i = 0; i < n-4; i++)
    {
        sum=0;
        for (int j = 0; j < 4; j++)
        {
            sum+=arr[i+j];
            // cout << arr[i+j] << " ";
        }
        mx=max(mx,sum);
        // cout << " : " << mx << '\n';
        // cout << '\n';
    }
    cout << mx;
    return 0;
}