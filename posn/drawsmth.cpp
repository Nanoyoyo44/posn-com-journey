#include <bits/stdc++.h>
using namespace std;

int main(){
    int r=5,n=2;
    char key[2]={'*','o'};
    for (int c = 0; c < 2*n+1+1; c++)
    {
        for (int i = 0; i < n+1; i++)
        {
            for (int l = 0; l < r; l++)
            {
                for (int j = 0; j < 2*n+1; j++)
                {
                    // cout << i << "," << j << " ";
                    if(l==r-1){
                        if(i+j>=n && j-i <=n){
                            if(j==0 && i== n) cout << l+1 << " ";
                            else cout << key[l%2]<<" ";
                        }else{
                            if((j<2*n+1-c/2 && i+j<2*n+1+n-c && j>n) || (i+j>=0 && i+j<n-c))
                                cout << "+ ";
                        }
                    }else{
                        if(i+j>=n && j-i <=n && i+j<2*n+1+n-c){
                            if(j==0 && i== n) cout << l+1<< " " ;
                            else cout << key[l%2] << " ";
                        }
                        else {
                            if((j<2*n+1-c/2 && i+j<2*n+1+n-c && j>n) || (i+j>=0 && i+j<n-c*2))
                                cout << "/ "; //(i+j>=0 && i+j<n) && i+j<2*n+1+n-c (j<2*n+1-c/2 && i+j<2*n+1+n-c)
                        }
                    }
                }
            }
            cout << '\n';
        }
    }
    return 0;
}