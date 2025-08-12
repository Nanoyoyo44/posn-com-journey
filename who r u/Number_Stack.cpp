#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if(!(x=="+" || x=="-" || x == "*" || x== "/")){
            int a=stoi(x);
            nums.push(a);
        }else{
            if(x=="+"){
                int sum=0;
                sum+=nums.top();
                nums.pop();
                sum+=nums.top();
                nums.pop();
                nums.push(sum);
            }else if(x=="-"){
                int sum=0;
                sum-=nums.top();
                nums.pop();
                sum+=nums.top();
                nums.pop();
                nums.push(sum);
            }else if(x=="/"){
                int sum=1,q=1;
                q=nums.top();
                nums.pop();
                sum=nums.top()/q;
                nums.pop();
                nums.push(sum);
            }else if(x=="*"){
                int sum=1;
                sum*=nums.top();
                nums.pop();
                sum*=nums.top();
                nums.pop();
                nums.push(sum);
            }
        }
    }
    cout << nums.top();
    
    return 0;
}