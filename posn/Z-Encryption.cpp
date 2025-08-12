#include <bits/stdc++.h>
using namespace std;

char table[1001][1001];

int main(){
    memset(table,'.',sizeof table);
    int n=3;
    string str="abcdefghijklmnopq";
    // cin  >> n >> str;
    int sz=str.size();
    // round
    int tmp=sz%(n*n-(n-2)*(n-2));
    cout << tmp;
    // if(){ 
    // }
    return 0;
}