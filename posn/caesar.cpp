#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<string> words;
    string str,st="";
    cin >> str;
    int n=0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==':' || i==str.size()-1){
            // cout << n << '-'  << i-n << '\n';
            if(i==str.size()-1){
                words.push_back(str.substr(n,i-n+1));
            }else
                words.push_back(str.substr(n,i-n));
            n=i;
            n++;
        }
    }
    int j=0;
    for(auto s:words){
        j++;
        for (int i = 0; i < s.size(); i++)
        {   
            int n=s.size();
            if(n%2!=0){
                n=-n;
            }
            char x;
            x=((s[i]-'a'+n+26*100)%26+'a');
            cout << x;
        }
        if(j<words.size())cout << ':';
    }
    return 0;
}