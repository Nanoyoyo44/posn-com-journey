#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,i=0,atk,combo=1,state_combo=-1;
    cin >> p;
    int p1=p,p2=p;
    while (p1>0&&p2>0&&i<2*p)
    {
        cin >> atk;
        if(atk&1)//คี่
        {
            if(state_combo==1){
                combo++;
            }else{
                state_combo=1;
                combo=1;
            }
            if(combo<3){
                p2--;
            }else{
                p2-=3;
            }
        }else{
            if(state_combo==0){
                combo++;
            }else{
                state_combo=0;
                combo=1;
            }
            if(combo<3){
                p1--;
            }else{
                p1-=3;
            }
        }
        // cout << "p1" << " " << p1 << " p2"  << " " << p2 << '\n';
        if(p1<=0||p2<=0){
            cout << (p1>p2?1:0) << '\n'<< atk;
            break;
        }
        i++;
    }
    return 0;
}