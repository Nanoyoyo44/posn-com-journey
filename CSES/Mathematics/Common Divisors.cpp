#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[200001],n,mx=INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx=max(mx,arr[i]);
    }
    vector<int> freq(mx+1,0);
    for (int i = 0; i <n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = mx; i >=1; i--)
    {
        int count=0;
        for (int j = i;j <= mx; j+=i)
        {
            count+=freq[j];
        }
        if(count>1){
            cout << i;
            return 0;
        }

    }
    


    return 0;
}

/*
5
3 14 15 7 9
*/