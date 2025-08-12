#include<bits/stdc++.h>
using namespace std;

int arr[1000001];



int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    if(n<=3)
        cout << "NO SOLUTION";
    else if(n==4){
        cout << "3 1 4 2";
    }else{
        for(int i=1;i<=n;i+=2) cout << i << ' ';
        for(int i=2;i<=n;i+=2) cout << i << ' ';
    }
    return 0;
}