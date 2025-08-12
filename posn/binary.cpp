#include <iostream>
using namespace std;
int sum=0;
void re(string str,int n){
    if(!n){
        cout << str << '\n';
        sum++;
        return;
    }
    str+='1';
    re(str,n-1);
    str.pop_back();
    str+='0';
    re(str,n-1);
}

int main(){
    re("",6);
    cout << sum;
    return 0;
}