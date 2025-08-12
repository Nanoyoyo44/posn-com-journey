#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="luffy";
    int n=str.size(),h=5;
    for (int i = 0; i < 2*h+1; i++)
    {
        for (int l = 0; l < n; l++)
        {
            for (int j = l; j < 2*h+1+l; j++)
            {
                if(abs(i-h)+abs(j-h)==h) cout << str[l];
                else cout << '.';
            }
        }
        cout << '\n';
    }
    
    return 0;
}