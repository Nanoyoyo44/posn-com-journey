#include <bits/stdc++.h>
using namespace std;

int countchange(int denoms[],int index,int amount){
    if(index<0||amount<0) return 0;
    if(amount==0) return 1;
    if(index<=0 && amount>=1) return 0;

    return countchange(denoms,index-1,amount)+countchange(denoms,index,amount-denoms[index-1]);
}

int main(){
    int denoms[4]={25,10,5,1};
    cout << countchange(denoms,4,10);


    return 0;
}   