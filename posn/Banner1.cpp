#include <bits/stdc++.h>
using namespace std;

char show[1001][1001];

void draw(int n,char c,int x,int y){
    for (int i = 1; i <= 2*n+1; i++)
    {
        for (int j = 1; j <= 2*n+1; j++)
        {
            if(abs(i-n-1)+abs(j-n-1)<=n) show[i+x][j+y]=c;
        }
        
    }
    
}

void print(int a,int start,int stop){
    for (int i = 1; i <= a; i++)
    {
        for (int j = start; j <= stop; j++)
        {
            cout << show[i][j];
        }
        cout << '\n';
    }
    
}

int main(){
    memset(show,'.',sizeof show);
    char c;
    int n,w,l;
    cin >> c >> n >> w >> l;
    for (int i = 0; i < 10; i++)
    {
        draw(n,c,0,i*(2*n+1));
    }
    print()
    return 0;
}

/*

X
4
30
5

*/