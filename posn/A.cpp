#include <bits/stdc++.h>
using namespace std;

bool ispar(string s){
    cin.tie(nullptr)->sync_with_stdio(false);
    int sum=0;
    for (int i = 0; i < s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-i-1]){
            sum++;
        }
        if(s.size()%2==1 && sum==1 && (s[s.size()/2]!=s[s.size()/2-1] || s[s.size()/2]!=s[s.size()/2+1])){
            return 0;
        }
        if(sum>1){
            return 0;
        }
    }
    return 1;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        string ch = (ispar(a)) ? "YES" : "NO";
        cout << ch << '\n';
    }
    
    return 0;
}
// 12
// 43

// 123
// 894
// 765