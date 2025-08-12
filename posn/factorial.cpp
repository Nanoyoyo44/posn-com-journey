#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,fi=1;
    cin >> n;
    int i=0;
    while(fi<=n){
        i++;
        fi*=i;
    }
    i--;
    cout << i;
    return 0;
}