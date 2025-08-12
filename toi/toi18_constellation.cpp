#include <bits/stdc++.h>
using namespace std;

const int MOD=1e6+3;
const int MAXN=500;
const int OFFSET=2*MAXN;
const int MAXN2=OFFSET+MAXN+OFFSET;

int tr[MAXN2][MAXN2];
int tl[MAXN2][MAXN2];
int pascal[MAXN2][MAXN2];

int main(){
    for (int n = 1; n < MAXN2; n++)
    {
        pascal[n][0]=pascal[n][n]=1;
        for (int k = 1; k < n; k++)
        {
            pascal[n][k]=(pascal[n-1][k-1]+pascal[n-1][k])%MOD;
        }
    }
    int nr,nc,k,ans=0;
    cin >> nr >> nc >> k;
    for (int i = 0; i < nr; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < nc; j++)
        {
            char c=row[j];
            tr[i+OFFSET][j+OFFSET]= c=='#'? 1:0;
            tl[i+OFFSET][j+OFFSET]= c=='#'? 1:0;
        }
    }
    for (int i = 1; i < MAXN2-1; i++)
    {
        for (int j = 1; j < MAXN2-1; j++)
        {
            tl[i][j]+=tl[i-1][j-1];
            tr[i][j]+=tr[i-1][j+1];
        }
    }
    for (int sz = 1; sz < nr+nc+1; sz++)
    {
        for (int i = OFFSET; i < OFFSET+nr; i++)
        {
            for (int j = OFFSET; j < OFFSET+nc; j++)
            {
                int tls=tr[i][j-sz]-tr[i-sz-1][j+1];
                int trs=tl[i][j+sz]-tl[i-sz][j];
                int bls=tl[i+sz][j]-tl[i][j-sz];
                int brs=tr[i+sz-1][j+1]-tr[i][j+sz];
                int total=tls+trs+bls+brs;
                if(total>=k) {
                    ans=(ans+pascal[total][k])%MOD;
                }
                // cout << "ih";
            }
        }
    }
    cout << ans ;

    
    return 0;
}
/*
3 2 2
#.
.#
#.
*/