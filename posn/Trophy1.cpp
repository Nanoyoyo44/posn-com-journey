#include <bits/stdc++.h>
using namespace std;

char show[1001][1001];

void draw(int n,int c,int x,int y){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n+1; j++)
        {
            if(i<=j && i+j<=2*n) show[i+x][j+y]=c;
        }
        
    }
    
}

void print(int a,int b){
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << show[i][j];
        }
        cout << '\n';
    }
    
}

int main(){
    memset(show,'.',sizeof show);
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str.size()-i; j++)
        {
            draw(n,str[j],0+n*j,i*(2*n+1)-i+n*j);
        }
    }
    
    print(str.size()*n,2*n*str.size());
    return 0;
}