#include <bits/stdc++.h>
using namespace std;

int N ,W,w[1001],v[1001],bags[1000001];

int main(){

    cin >> N>> W;
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = W; j >=w[i] ; j--)
        {
            bags[j]=max(bags[j],bags[j-w[i]]+v[i]);
        }
    }
    
    cout << bags[W];

    return 0;
}