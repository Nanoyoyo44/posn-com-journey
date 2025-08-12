#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    vector<int> a={1,2};
    vector<int> b={3};
    cin >> n;
    if(n%4==3){
        cout <<"YES\n";
        if(n==3){
            cout << 2 << '\n';
            cout << "1 2 ";
            cout << '\n';
            cout << 1 << '\n';
            cout << "3 ";
        }else{
            cout << n/2+1 << '\n';
            cout << "1 2 ";
            for (int i = 4; i <= n; i++)
            {
                if(i%4==0 || i%4==3){
                    cout << i << ' ';
                }

            }
            cout << '\n';
            cout << n/2 << '\n';
            cout << "3 ";
            for (int i = 4; i <= n; i++)
            {
                if(!(i%4==0 || i%4==3)){
                    cout << i << ' ';
                }

            }
        }
        
    }else if(n%4==0 ){
        cout <<"YES\n";
        if(n==4){
            cout << 2 << '\n';
            cout << "1 4 " << '\n';
            cout << '\n';
            cout << 2 << '\n';
            cout << "2 3 ";
            cout << '\n';
        }else{
            cout << n/2 << '\n';
            cout << "1 4 ";
            for (int i = 5; i <= n; i++)
            {
                if(i%4==0 || i%4==1){
                    cout << i << ' ';
                }

            }
            cout << '\n';
            cout << n/2 << '\n';
            cout << "2 3 ";
            for (int i = 5; i <= n; i++)
            {
                if(!(i%4==0 || i%4==1)){
                    cout << i << ' ';
                }
            }
            }
    }
    else{
        cout << "NO";
    }
    return 0;
}
// 1 2 5 6 9 11
//   3 4 7 8 10
// 1 4 5 8
// 2 3 6 7