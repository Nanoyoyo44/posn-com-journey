#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<bool> time(28800000,false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int start,end;
        cin >> start >> end;
        fill(time.begin()+start-1,time.begin()+end,true);
    }
        cout << count(time.begin(),time.end(),false);
    return 0;
}