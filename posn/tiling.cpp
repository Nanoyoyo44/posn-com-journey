#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x,y,min=INT_MAX;
        cin >> x >> y;
        // cout << int(sqrt(x)) <<' ' << int(sqrt(y)) << '\n';
        if(x>=y){
            cout << int(sqrt(y));
        }else{
            while (1)
            {
                int r=0;
                r+=2;
            if(int(sqrt(x))+r<=int(sqrt(y))){
                cout << int(sqrt(x))+r;
                break;
            } 
            }
        }
        cout << '\n';
    }
    

    return 0;
}