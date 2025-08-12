#include<bits/stdc++.h>
using namespace std;

bool isparlindrome(string s){
    for (int i = 0; i < s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-i-1]) return 0;
    }
    return 1;
}

int main(){
    string str;
    cin >> str;
    if(isparlindrome(str)) cout << "yes";
    else cout << "no";
    return 0;
}