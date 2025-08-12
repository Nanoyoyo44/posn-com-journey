#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m,a,b,ans=0;
    char c;
    cin >> n >> m;
    vector<int> color(n+1,0);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        for (int j = a; j <=b; j++)
        {
            color[j]++;
            color[j]%=3;//R G B
        }
    }
    cin >> c;

    // for (int i = 1; i <=n; i++)
    // {
    //     cout << color[i] << " ";
    // }
    
    if(c=='R'){//0
        for (int i = 1; i <=n; i++)
        {
            if(color[i]==2) ans+=1;
            if(color[i]==1) ans+=2;
        }
    }else if(c=='B'){// 1
        for (int i = 1; i <=n; i++)
        {
            if(color[i]==0) ans+=1;
            if(color[i]==2) ans+=2;
        }
    }else{// 2
        for (int i = 1; i <=n; i++)
        {
            if(color[i]==0) ans+=2;
            if(color[i]==1) ans+=1;
        }
    }
    cout << ans;
    return 0;
}