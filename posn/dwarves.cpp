#include<bits/stdc++.h>
using namespace std;

bool arr[101];

int main(){
    int d[10],total=100;
    for (int i = 0; i < 9; i++)
    {
        cin >> d[i];
        total-=d[i];
        arr[i]=1;
    }

    total=-total;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(i!=j && d[i]+d[j]==total){
                d[i]=-1;
                d[j]=-1;
            }
        }
        
    }
    // cout << ".\n";
    for(auto i: d){
        if(i>0){
            cout << i << '\n';
        }
    }
    // cout << total;
    return 0;
}