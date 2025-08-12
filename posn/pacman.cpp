#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,posx=0,posy=0;
    cin >> x >> y;
    string str;
    cin >> str;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if(i+j==0) cout <<"e";
            else cout << ".";
        }
        cout << '\n';
    }
    cout << "--------------------";
    cout << '\n';
    
    for (int i = 0; i < str.size(); i++)
    {
        
        if(str[i]=='w'&& posx-1>0 && posx-1<x ) posx--;
        if(str[i]=='s'&& posx+1>0 && posx+1<x ) posx++;
        if(str[i]=='d'&& posy+1>0 && posy+1<y ) posy++;
        if(str[i]=='a'&& posy-1>0 && posy-1<y ) posy--;
        
        for (int a = 0; a < x; a++)
        {
            for (int b = 0; b < y; b++)
            {
                if(a==posx && b==posy) cout << "e";
                else cout << ".";
            }
            cout << '\n';
        }
        cout << "--------------------";
        cout << '\n';
        
    }
    
    return 0;
}