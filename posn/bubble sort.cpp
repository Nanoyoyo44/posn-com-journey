#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int j=0;
    bool ch=1;
    while(1){
        if(!ch) break;
        for (int i = 0; i < 5-j-1; i++)
        {
            ch=0;
            if(arr[i]>arr[i+1]) {
                swap(arr[i],arr[i+1]);
                ch=1;
            }
            if(ch){
                for(auto i:arr){
                    cout << i << ' ';
                }
                cout << '\n';   
            }
        }
        j++;
    }
    return 0;
}