    #include <bits/stdc++.h>
    using namespace std;

    const int mod=1e9+7;
    string pipe[2];
    int dp[2][5002];

    int main(){
        ios::sync_with_stdio(0);cin.tie(0);
        int n;
        cin >> n;
        while (n--)
        {
            memset(dp,0,sizeof dp);
            int k;
            cin >> k;
            for (int i = 0; i < 2; i++)
            {
                cin >> pipe[i];
            }
            pipe[0]="."+pipe[0];
            pipe[1]="."+pipe[1];
            dp[0][0]=1;
            dp[1][0]=1;
            int tmp0=1,tmp1=1;
            // cout << dp[0][0] << " " << dp[1][0] << '\n';
            for (int i = 1; i <= k; i++)
            {
                if(pipe[0][i]=='#') dp[0][i]=0;
                if(pipe[1][i]=='#') dp[1][i]=0;

                if(pipe[0][i]=='.'){
                    dp[0][i]=dp[0][i-1];
                    if(pipe[1][i]=='.') dp[0][i]+=tmp1;
                }

                if(pipe[1][i]=='.'){
                    dp[1][i]=dp[1][i-1];
                    if(pipe[0][i]=='.') dp[1][i]+=tmp0;
                }

                tmp0=dp[0][i]%mod;
                tmp1=dp[1][i]%mod;

                // cout << dp[0][i] << " " << dp[1][i] << '\n';
            }
            // cout << "____________\n";
            cout << (dp[0][k]+dp[1][k])%mod << '\n';
        }

        return 0;
    }
    /*
    3
    1
    .
    .
    2
    ..
    ..
    2
    .#
    ..

    */