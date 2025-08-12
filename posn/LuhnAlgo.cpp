#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int sum=0,index=0;
    if(str.size()!=19){
        cout << "Incorrect";
    }else{
        for (int i = 0; i < str.size(); i++)
        {
            int n;
            if(str[i]!='-'){
                n=str[i]-'0';
                index++;
                if(index%2!=0)n*=2;
                if(n>=10)n-=9;
                // cout << n;
                sum+=n;
            }
        }
        string s=to_string(sum);
        if(s[s.size()-1]=='0'){
            cout << "Valid\n";
            if(str[0]=='2' || str[0]=='5') cout << "Master Card";
            else if(str[0]=='3') cout <<"America Express";
            else if(str[0]=='4') cout << "Visa";
            else if(str[0]=='6') cout << "Discover";
        }else{
            cout << "Invalid";
        }
    }
    
    return 0;
}