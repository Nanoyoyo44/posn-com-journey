#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    string alp;
    char x,y;
    cin >> n >> x >> y;
    for(int i=0;i<n;i++){
        alp+=x;
        alp+=y;
    }
    sort(alp.begin(),alp.end());
    do
    {
        int a=0;
        int b=0;
        // cout << alp << '\n';
        for(auto i:alp){
            // cout << i;
            if(i==x) a++;
            else b++; 
            if(b>a) break;
        }
        // cout << a << b << ' ';
        if(b>a) continue;
        else{
            for (int i = 1; i <= 2*n; i++)
            {
                sum+=(abs('A'-alp[i-1])+1)*i;
            }
            
        }
        // cout << '\n';
    } while (next_permutation(alp.begin(),alp.end()));
    cout << sum;
    return 0;
}