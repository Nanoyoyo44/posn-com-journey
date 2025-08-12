#include <bits/stdc++.h>
using namespace std;

int main(){
    double anscost,ansbook,ansprofit,c;
    cin >> c;
    for (int book = 1000; book <=15000; book+=500)
    {
        for (int cost = 74; cost <= 144; cost++)
        {
          double amount = (100-(0.8569*exp(0.09*(cost-100))))*book/100;
          if(amount>0 && amount<ansprofit)
        }
        
    }
    
    return 0;
}