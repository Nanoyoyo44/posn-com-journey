#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum=accumulate(s.begin(),s.end(),-48*s.size());
    cout << sum;
    return 0;
}