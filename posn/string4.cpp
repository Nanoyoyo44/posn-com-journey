#include <bits/stdc++.h>
using namespace std;

string cstr(string str){
    string s="";
    for(auto i:str){
        s+=toupper(i);
    }
    return s;
}

bool ispar(string str){
    str=cstr(str);
    for (int i = 0; i <= str.size()/2; i++)
    {
        if(str[i]!=' ' && str[i]!=str[str.size()-i-1]) return 0;
    }
    return 1;
}

int main(){
    string str;
    getline(cin,str);
    cout << (ispar(str) ? "It is palindrome": "It is not palindrome") ;
    return 0;
}