#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b,key="";
    cin >> a >> b;
    int n=a.size();
    for(auto& i:a){
        if(i>='a'){
            i=char(i-('a'-'A'));
        }
    }
    for(auto& i:b){
        if(i>='a'){
            i=char(i-('a'-'A'));
        }
    }
    // cout << a << '\n';
    // cout << b << '\n';
    for (int i = 0; i < n; i++)
    {
        int diff=a[i]-b[i];
        if(diff<0)diff+=26;
        if(diff>9){
            cout <<"R.I.P.";
            return 0;
        }
        key+=char(diff+'0');
    }
    cout << key;
    // cout << "a : " <<int('a') << '\n';
    // cout <<"A : " << int('A') << '\n';
    return 0;
}

/*

morningdeW
MoRNiNgDEV

KveghaBf
CodeCube
*/