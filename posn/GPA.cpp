#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float sum=0,s=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float a,b;
        cin >> a >> b;
        s+=b;
        sum+=a*b;
    }
    cout << fixed << setprecision(2) << sum/s;
    return 0;
}