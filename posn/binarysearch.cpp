#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[101];
    for (int i = 1; i <= 100; i++)
    {
        arr[i]=i;
    }
    
    int n=sizeof (arr)/sizeof(arr[0]),s,fnd=99;
    int i=(n+1)/2;
    int d=i/2;
    while (arr[i]==fnd || d!=0)
    {
        if(arr[i]>fnd) i=i-d+1;
        else i=i+d-1;
        d/=2;
    }
    cout << i << " " << arr[i];
    
    return 0;
}