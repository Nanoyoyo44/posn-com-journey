#include <bits/stdc++.h>
using namespace std;

#define ll long long

unordered_map<string,char> num ={
    {" _ | ||_|",'0'},//0
    {"     |  |",'1'},//1
    {" _  _||_ ",'2'},//2
    {" _  _| _|",'3'},//3
    {"   |_|  |",'4'},//4
    {" _ |_  _|",'5'},//5
    {" _ |_ |_|",'6'},//6
    {" _   |  |",'7'},//7
    {" _ |_||_|",'8'},//8
    {" _ |_| _|",'9'},//9
};

int segtoint(ll a){
    string key="",str[3],n="";
        for (int j = 0; j < 3; j++)
        {
            getline(cin,str[j]);
        }
        for (ll j = -1; j < 4*a-1; j+=4)
        {
            key=str[0].substr(j+1,3);
            key+=str[1].substr(j+1,3);
            key+=str[2].substr(j+1,3);
            n+=num[key];
        }
    return stoll(n);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string str[3],key,n1="",n2="";
    ll a,b;
    cin >> a >> b;
    cin.ignore();
    cout << segtoint(a)+segtoint(b);
    
    return 0;
}