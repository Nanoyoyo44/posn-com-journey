#include <bits/stdc++.h>
using namespace std;

char show[1001][1001];

void draw(int n,char c,int x,int y){
    for (int i = 1; i <= 2*n+1; i++)
    {
        for (int j = 1; j <= 2*n+1; j++)
        {
            if(abs(i-n-1)+abs(j-n-1)==n) show[i+x][j+y]=c;
        }
        
    }
    
}

void print(int x,int y){
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            cout << show[i][j];
        }
        cout << '\n';
    }
    
}

int main(){
    memset(show,'.',sizeof show);
    string str;
    int h;
    cin >> str >> h;
    int n=str.size();
    for (int i = 0; i < n; i++)
    {
        draw(h,str[i],0,(2*h+1)*i-2*i);
    }
    // draw(h,str[0],0,0);
    print(2*h+1,(2*h-1)*n+2);
    return 0;
}