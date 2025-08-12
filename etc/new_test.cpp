
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int h=10;
    string str="Trophy";
    int n=str.size();
    for (int j = 0; j < h; j++)
    {    
        for (int i = 1; i < h-j; i++)
        {
            cout << " ";
        }        
        for (int i = 0; i < 2*j-1; i++)
        {
            cout << "*";
        }
        for (int i = 0; i < h-j; i++)
        {
            cout << " ";
        }

        cout <<  '\n';
    }
    
    return 0;
}