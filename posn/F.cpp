#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,ans="";
    int n=0;
    cin >> str;
    vector<string> s;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==':'){
            s.push_back(str.substr(n,i-n));
            n=i+1;
        }else if(i==str.size()-1){
            s.push_back(str.substr(n,i-n+1));
        }
    }   
    for (int i = 0; i < s.size(); i++)
    {
        ans="";
        int r=stoi(s[i]);
        int end = (i==0) ? 5:6;
        for (int j = 0; j < end; j++)
        {
            if((r>>j)&1) ans+='0';
            else ans+='1';
        }
        for(int j=ans.size()-1;j>=0;j--){
            cout << ans[j];
        }
        if(i!=s.size()-1)cout <<':';
    }
    return 0;
}