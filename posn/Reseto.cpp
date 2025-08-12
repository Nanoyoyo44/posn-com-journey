#include<bits/stdc++.h>
using namespace std;

bool arr[1001];

int main(){
    int n,k;
    cin >> n >> k;
    memset(arr,1,sizeof arr);
    for(int i=2;i<=n;i++){
        if(arr[i]){
            k--;
            if(!k){
                cout << i;
            }
            for(int j=i*i;j<=n;j+=i){
                if(arr[j]==0) continue;
                arr[j]=0;
                k--;
                if(!k){
                    cout << j;
                }
            }
        }
    }
    return 0;
}