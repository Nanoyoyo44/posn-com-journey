#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q;
    cin >> n >> q;
    vector<int> tree(n),L1,L2,l(n),r(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> tree[i];
    }

    for (int i = 0; i < n; i++)
    {
        auto itr = lower_bound(L1.begin(),L1.end(),tree[i]);
        l[i]=itr-L1.begin();
        if(itr==L1.end()) L1.push_back(tree[i]);
        else *itr=tree[i];
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        auto itr = lower_bound(L2.begin(),L2.end(),tree[i]);
        r[i]=itr-L2.begin();
        if(itr==L2.end()) L2.push_back(tree[i]);
        else *itr=tree[i];
    }
    
    while (q--)
    {
        int x;
        cin >> x;
        cout << min(l[x],r[x]) << '\n';
    }
    
    return 0;
}
/*
10 4
2 4 6 8 10 9 7 5 3 1
9 4 0 3

16 3
2 1 5 4 8 6 8 10 9 1 7 5 4 1 9 3
7 14 1
*/