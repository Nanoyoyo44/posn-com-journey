#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    set<pair<int,int>> kid;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        kid.insert(make_pair(x,i+1));
    }
    for(auto i:kid) cout << i.second << " ";
    cout << '\n';
    for(auto i:kid){
        if(i.first>=80) cout << 'A';
        else if(i.first>=70) cout << 'B';
        else if(i.first>=60) cout << 'C';
        else if(i.first>=50) cout << 'D';
        else cout << 'F';
        cout << " ";
    }
    return 0;
}