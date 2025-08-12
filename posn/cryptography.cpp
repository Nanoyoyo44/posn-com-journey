#include <bits/stdc++.h>
using namespace std;

int main(){
    int key,i=1;
    string str;
    cin >> str >> key;
    int num[1001];
    for (int i = 0; i < 1000; i++)
    {
        num[i]=(key*i);
    }
    
    for (int i = 1; i < 1000; i++)
    {
        if(num[i]%43==1){
            key=(num[i])/key;
            break;
        }
    }
    
    // cout << key;

    for(auto i:str){
        cout << char(((i-'0')*key)%43+'0');
    }   
    return 0;   
}