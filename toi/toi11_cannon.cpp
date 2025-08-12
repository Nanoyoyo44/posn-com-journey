#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n,m,k,l;
    cin >> n >> m >> k >> l;
    vector<int> cannon(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cannon[i];
    }
    while (k--)
    {
        int ans=0;
        auto start=cannon.begin(),end=cannon.end();
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            auto itr1=lower_bound(start,end,x-l);
            auto itr2=upper_bound(start,end,x+l);
            ans+=itr2-itr1;
            start=itr2;
        }
        cout << ans << '\n';
    }
    
    
    return 0;
}