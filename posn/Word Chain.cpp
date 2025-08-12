#include <bits/stdc++.h>
using namespace std;

string str[1100];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int l,n;
    cin >> l >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        int score=0;
        for (int j = 0; j < l; j++)
        {
            if(str[i][j]!=str[i+1][j]) score++;
            if(score>2) break;
        }
        // cout <<score << '\n';
        if(score>2){
            cout << str[i];
            return 0;
        }   
    }
    return 0;
}   