#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long a,b;
        cin >> a >> b;
        while ( a && b )
        {
            if(a>b){
                a-=2;
                b-=1;
            }else{
                b-=2;
                a-=1;
            }
        }
        
        if((a==0 && b==0)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}