#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int mod=1e9+7;
int sum_square[501][501];

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    for (int i = 0; i < 2; i++)
    {
        vector<vector<int>> garden(501,vector<int> (501,1));
        int m,n,amount_of_tree_pos,ans=INT_MIN;
        memset(sum_square,0,sizeof sum_square);
        cin >> m >> n >>amount_of_tree_pos;
        for (int j = 0; j < amount_of_tree_pos; j++)
        {
            int y,x;
            cin >> y >> x;
            garden[y][x]=0;
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum_square[i][j]=sum_square[i][j-1]+sum_square[i-1][j]-sum_square[i-1][j-1]+garden[i][j];
            }
        }

        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << sum_square[i][j] << " ";
        //     }
        //     cout << '\n';
        // }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int ss = 2; ss<= min(i,j)+1; ss++)
                {
                    int big_square=sum_square[i][j]
                                    -sum_square[i-ss][j]
                                    -sum_square[i][j-ss]
                                    +sum_square[i-ss][j-ss];
                    int small_square=sum_square[i-1][j-1]
                                    -sum_square[i-ss+1][j-1]
                                    -sum_square[i-1][j-ss+1]
                                    +sum_square[i-ss+1][j-ss+1];
                    // cout << "big square :" << big_square << '\n';
                    // cout << "small square :" << small_square << '\n';
                    // cout << "size of squre :"<< ss << '\n';
                    // cout << "delta area : " << big_square-small_square << ' ' <<ss*ss-(ss-2)*(ss-2) << '\n';
                    // cout << "size : " << ss << '\n';

                    if(big_square-small_square==ss*ss-(ss-2)*(ss-2)){
                        ans=max(ans,ss);
                    }
                }   
            }   
        }
        cout << ans << '\n';
        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << garden[i][j] << " ";
        //     }
        //     cout << '\n';
        // }
    }
    
    return 0;
}
/*
5 8
6
0 7
1 3
2 0
3 6
4 2
4 5
5 5
8
0 0
0 4
4 0
4 4
0 1
2 0
2 4
4 3

*/