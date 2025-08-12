#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=10,arr[110],x;
    int left=0;
    int right=n-1;
    while (left<=right)
    {
        int mid=right+(right-left)/2;

        if(arr[mid]==x){
            cout << mid;
            break;
        }
        if(arr[mid]<x){
            left=mid+1;
        }
        if(arr[mid]>x){
            right=mid-1;
        }
    }
    

    return 0;
}