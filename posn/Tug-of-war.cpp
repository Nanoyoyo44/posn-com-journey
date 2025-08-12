#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    vector<int> a;
    vector<int> b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (int i = 0; i < n; i++)
    {
        sum+=abs(a[i]-b[i]);
    }
    cout << sum;
    return 0;
}

/*
3
-5
-10
-7
8
6
10

*/