#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n,x;
    set<int> st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }
    cout << st.size();
    
    return 0;
}