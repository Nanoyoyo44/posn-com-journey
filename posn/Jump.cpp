#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<int> st;
    int mx=INT_MIN,n,a,sum=0;
    cin >> n >> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push_back(x);
    }
    // cout << "===============\n";
    for(int i=0;i<n-1;i++){
        sum=0;
        for (int j = i+1; st[j] <= st[i]+a && j<n; j++)
        {
            sum++;
        }
        // cout << st[i] << " : ";
        // cout << sum << '\n';
        mx=max(mx,sum);
    }
    cout << mx;
    return 0;
}

/*

11 6
3
6
7
9
10
11
13
16
18
19
20

*/