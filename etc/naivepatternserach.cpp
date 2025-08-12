#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="AABAACAADAABAAABAA";
    string pat="AABA";
    int str_sz=str.size();
    int pat_sz=pat.size();
    for (int i = 0; i < str_sz-pat_sz; i++)
    {
        bool ch=1;
        for (int j = 0; j < pat_sz; j++)
        {
            if(str[i+j]!=pat[j]) ch=0;
        }
        if(ch){
            cout << i << '\n';
            // break;
        }
    }
    return 0;
}