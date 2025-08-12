#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(auto j:s){
            sum+=(j-'A'+1);
        }
    }
    cout << sum;
    return 0;
}
