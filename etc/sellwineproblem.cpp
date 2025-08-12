#include <bits/stdc++.h>
using namespace std;

int maxPrice(int price[],int begin,int end,int n){
    if(begin>end){
        return 0;
    }

    int year=n-(end-begin);
    if(begin==end){
        return year*price[begin];
    }
    return 
}

int main(){


    return 0;
}