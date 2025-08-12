#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    memset(arr,0,sizeof arr);
    string str;
    getline(cin,str);
    for(auto i:str){
        if(i!=' '){
            arr[i-'0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << arr[i] << '\n';
    }
    
    return 0;
}