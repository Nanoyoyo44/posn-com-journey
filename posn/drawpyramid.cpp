#include <bits/stdc++.h>
using namespace std;

int main(){
    int r=4,n=2;
    char key[2]={'*','o'};
    int c=0;
    for (int i = 0; i < n+1; i++)
    {
        for (int l = 0; l < r; l++)
        {
            for (int j = 0; j < 2*n+1; j++)
            {
                if(l==r-1){
                    if(i+j>=n && j-i<=n)
                    cout << key[l%2];
                    else cout << " ";
                }else{
                    if(i+j>=n && j-i<=n)
                    cout << key[l%2];
                    else cout << " ";
                }
            }
        }
        cout << '\n';
    }
    
    return 0;
}