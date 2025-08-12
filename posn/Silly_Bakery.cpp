#include <bits/stdc++.h>
using namespace std;

int total=0;
int need[5],have[5];

int main(){
    int n;
    cin >> n;
    // (8 6 4 2 1)/8
    // 1 3/4 1/2 1/4 1/8
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin >> a;
            need[j]+=a;
        }
    }
    
    // for (int i = 0; i < 5; i++)
    // {
        // cout << need[i] <<  " ";
    // }
    // cout << '\n';
    have[0]=1e9;
    //0
    total+=need[0];
    have[0]-=need[0];
    // cout << total << '\n';
    //1
    total+=need[1];
    have[0]-=need[1];
    have[1]+=need[1];
    have[3]+=need[1];
    // cout << total << '\n';
    //2
    total+=(need[2]+1)/2;
    have[2]+=2*((need[2]+1)/2);
    if(have[2]>need[2]) have[3]+=2*(have[2]-need[2]);
    // cout << total << '\n';
    //3
    if(have[3]<need[3]){
        total+=(need[3]-have[3]+3)/4;
        have[3]+=4*((need[3]-have[3]+3)/4);
    }
    if(have[3]>need[3]) have[4]+=2*(have[3]-need[3]);
    // cout << total << '\n';
    //4
    if(have[4]<need[4]){
        total+=(need[4]-have[4]+7)/8;
    }
    // cout << total << '\n';
    cout << total << '\n';
    return 0;
}
// (8 6 4 2 1)/8
/*
1 3/4 1/2 1/4 1/8
3
1 0 1 0 1
0 1 0 1 0
0 1 0 0 0
*/