#include <bits/stdc++.h>
using namespace std;

char realnumspad[4][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    {'*','0','#'},
};


int main(){
    int n=3;
    string phonenumbers;
    map<char,char> key;
    string s;
    for (int i = 0; i < 4; i++)
    {
        cin >> s;
        for (int j = 0; j < 3; j++)
        {
            key[s[j]] = realnumspad[i][j] ;
        }
        
    }
    cin >> phonenumbers;

    for(auto i: phonenumbers){
        cout << key[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << wrongnumspad[i][j];
    //     }
    //  cout << '\n';   
    // }
    return 0;
}