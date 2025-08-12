#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int l,n;
    string curr,prev;
    cin >> l >> n >> prev;
    int cnt;
    while(--n)
    {
        cnt=0;
        cin >> curr;
        for (int i = 0; i < l; i++)
        {
            if(prev[i]!=curr[i]) cnt++;
        }
        if(cnt>2){
            cout << prev;
            return 0;
        }
        prev=curr;
    }
    cout << prev;
    return 0;
}