    #include <bits/stdc++.h>
    using namespace std;

    typedef unsigned long long ull;
    typedef long long ll ;
    typedef pair<int,int> pii;
    typedef pair<int,pii> piii;

    const int mod=1e9+7;
    const int MxN=2005;
    int arr[MxN][MxN];
    int sum_right[MxN][MxN];
    int sum_left[MxN][MxN];
    int tri_right[MxN][MxN];
    int tri_left[MxN][MxN];


    int main(){
        ios::sync_with_stdio(false);cin.tie(NULL);
        int n,m,k;
        cin >> m >> n >> k;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
                sum_left[i][j]=arr[i][j]
                                +sum_left[i-1][j]
                                +sum_left[i][j-1]
                                -sum_left[i-1][j-1];
                tri_left[i][j]=tri_left[i-1][j-1]
                                +sum_left[i][j]
                                -sum_left[i-1][j];
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = n; j >=1; j--)
            {
                sum_right[i][j]=arr[i][j]
                                +sum_right[i-1][j]
                                +sum_right[i][j+1]
                                -sum_right[i-1][j+1];
                tri_right[i][j]=tri_right[i-1][j+1]
                                +sum_right[i][j]
                                -sum_right[i-1][j];
            }
        }

        int ans=INT_MIN;

        for (int i = k; i <= m; i++)
        {
            for (int j = k; j <= n; j++)
            {
                ans=max(ans,tri_left[i][j]-tri_left[i-k][j-k]-sum_left[i][j-k]+sum_left[i-k][j-k]);
            }
        }
        for (int i = k; i <= m; i++)
        {
            for (int j = n-k+1; j >= 1; j--)
            {
                ans=max(ans,tri_right[i][j]-tri_right[i-k][j+k]-sum_right[i][j+k]+sum_right[i-k][j+k]);
            }
        }
        cout << ans;
        
        return 0;
    }
    /*
    4 5 3
    1 2 -1 -4 -20
    -8 -3 4 2 1
    3 8 10 1 3
    -4 -1 1 7 -6 
    */