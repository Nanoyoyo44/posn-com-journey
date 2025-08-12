#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ss, ssk,s=0;
    string ss1, ss2, key,final="",str="";
    cin >> ss >> ssk >> ss1 >> ss2 >> key;
    for (int i = 0; i < ss+ssk; i++)
    {
        key+=' ';
    }
    
    for (int j = 0; j < ss+ssk; j++)
    {
        s=j;
        for (int  i = 0; i < ss; i++)
        {
            str="";
            // cout << ss1[i]<< key[s]<< ss2[i];
            str+=ss1[i];
            if(key[s]!=' ' && s>= 0)str+=key[s];
            str+=ss2[i];
            // cout << '\n';
            if(str.size()==3){
                sort(str.begin(),str.end());
                key[s]=str[1];
            }
            // cout << ' ' << s << '\n';
            s--;
            
        }
        // cout << "---\n";
    }
    // for (int i = final.size(); i >=0; i--)
    // {
    //     cout << final[i];
    // }
    cout << key;
    return 0;
}