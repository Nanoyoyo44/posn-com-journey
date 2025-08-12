#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    bool b=0,s=0;
    for(auto i:str){
        if(i>='A'&&i<='Z') b=1;
        if(i>='a'&&i<='z') s=1;
    }
    if(b&&s) cout <<"Mix";
    else if(b) cout << "All Capital Letter";
    else if(s) cout << "All Small Letter";
    return 0;
}