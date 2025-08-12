#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,cnt=1,x=0,y=0;
    cin >> n;
    int round =n;
    int total=1;
    unsigned long long int sum=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        if(i%4==0){
            for (int j = 0; j < round; j++)
            {
                arr[y][x+j] = cnt;
                cnt++;
            }   
            round--;
            x+=round;
            y++;
        }else if(i%4==1){
            for (int j = 0; j < round; j++)
            {
                arr[y+j][x] = cnt;
                cnt++;
            }
            y+=round;
            y--;
            x--;
        }else if(i%4==2){
            for (int j = 0; j < round; j++)
            {
                arr[y][x-j] = cnt;
                cnt++;
            }
            round--;
            x-=round;
            y--;
        }else{
            for (int j = 0; j < round; j++)
            {
                arr[y-j][x] = cnt;
                cnt++;
            }
            y-=round;
            y++;
            x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << arr[i][j] << ' ';
            // if(arr[i][j] <10) cout << ' ';
            // if(arr[i][j] <100) cout << ' ';
            if(i==j ||i==-j+n-1) {
                // cout << arr[i][j] << ' ';
                sum+=arr[i][j];
            }
        }
        // cout << '\n';
    }   
    // if(n%2)sum+=arr[n/2][n/2];
    cout << sum;
    return 0;
}