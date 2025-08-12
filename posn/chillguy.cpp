#include <iostream>
#include <vector>
using namespace std;
// int i;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int q;
    cin >> q;
    // vector<int> a1[n+1] (n+1);
    while (q--)
    {
        bool ch=1;
        int n,k;
        cin >> n >> k;
        vector<int> a1(n+1),a2(n+1);
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i+1];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a2[i+1];
        }
        for (int i = 1; i <=n-k; i++)
        {
            if(a1[i]!=a2[i]){
                swap(a1[i],a1[i+k]);
            }
        }
        for (int i = n; i >=1 ; i--)
        {
            if(a1[i]!=a2[i]){
                ch=0;
                break;
            }
        }
        if(ch) cout << "yes\n";
        else   cout << "no\n";
        
    }
    return 0;
}
/*
4
5 3
1 7 11 6 5
6 5 11 1 7
4 2
1 5 7 8
7 8 5 1
6 1
47 99 47 39 30 96
33 30 99 47 96 39
7 4
28 29 77 42 82 39 16
82 29 16 42 28 39 77
*/