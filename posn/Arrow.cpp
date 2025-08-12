#include <bits/stdc++.h>
using namespace std;

void up(char c,int ss,int n){
    for (int j = 0; j < 2*ss+1; j++)
    {
        if(j==ss || n==-j+ss|| n==j-ss ) cout << c;
        else cout << '.';
    }
    
}

void down(char c,int ss,int n){
    for (int j = 0; j < 2*ss+1; j++)
    {
        if(j==ss || n==j+ss || n==-j+3*ss) cout << c;
        else cout << '.';
    }
    
}

void right(char c,int ss,int n){
    for (int j = 0; j < 2*ss+1; j++)
    {
        if(n==ss || n==j-ss|| n==-j+3*ss) cout << c;
        else cout << '.';
    }
    
}

void left(char c,int ss,int n){
    for (int j = 0; j < 2*ss+1; j++)
    {
        if(n==ss || n==-j+ss|| n==j+ss) cout << c;
        else cout << '.';
    }
    
}
int main(){
    int l;
    char key;
    string seq;
    cin >> l >> key >> seq;
    for (int i = 0; i < 2*l+1; i++)
    {
        for(auto j:seq){
            if(j=='D') down(key,l,i);
            if(j=='U') up(key,l,i);
            if(j=='L') left(key,l,i);
            if(j=='R') right(key,l,i);
        }
        cout << '\n';
    }
    return 0;
}