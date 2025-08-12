#include<bits/stdc++.h>
using namespace std;

int main(){
    char key;
    int n,w,l;
    cin >> key >> n >> w >> l;
    for(int c=0;c<=l;c++){
        for(int i=0;i<2*n+1;i++){
            for(int j=0;j<w;j++){
                if(abs(i-n)+abs((j+100*(2*n+1)-c)%(2*n+1)-n)<=n){
                    cout << key;
                }else{
                    cout << '.';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}