#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

float arr[21][21];
const int mod=1e9+7;
int n;
float mn_pos=1e9;

float rec(int index,int bit,int value){
    if(index<0||index>n) return -1e9;
    if(index==n-1){
        return value;
    }
    for (int i = 0; i < n; i++)
    {
        if(bit&(1<<n)==1) continue;
        return rec(index+1,bit|(1<<i),value+arr[index][i])>rec(index+1,bit|(1<<i),value+arr[index][i]) ? rec(index+1,bit|(1<<i),value+arr[index][i]):rec(index+1,bit,value)
    }
    
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            arr[i][j]/=100.0;
        }
    }
    float result=rec(0,0,1);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    return 0;
}