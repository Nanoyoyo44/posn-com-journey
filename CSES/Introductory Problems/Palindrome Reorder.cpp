#include <bits/stdc++.h>
using namespace std;

bool isparlindrome(string str){
    for ( unsigned long long i = 0; i <= str.size()/2; i++)
    {
        if(str[i]!=str[str.size()-i-1]) return 0;
    }
    return 1;
}

int main(){
    string str;
    cin >> str;
    if(isparlindrome(str)) {
            cout << str;
            return 0;
        }
    sort(str.begin(),str.end());
    do
    {
        if(isparlindrome(str)) {
            cout << str;
            return 0;
        }
    } while (next_permutation(str.begin(),str.end()));
    cout << "NO SOLUTION";
    return 0;
}