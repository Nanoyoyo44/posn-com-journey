#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    for (int i = 0; i < 3; i++)
    {
        int h,t,sum=0;
        cin >> h >> t;
        string str="";
        for (int j = 0; j < h; j++)
        {
            str+='H';
        }
        for (int j = 0; j < t; j++)
        {
            str+='T';
        }
        do
        {
            bool ch=1;
            for (int j = 0; j < str.size()-1; j++)
            {
                if(str[j]=='H' && str[j+1]=='H'){
                    ch=0;
                    break;
                }
            }
            if(ch) sum++;
        } while (next_permutation(str.begin(),str.end()));
        cout << sum << '\n';
    }
    
    return 0;
}