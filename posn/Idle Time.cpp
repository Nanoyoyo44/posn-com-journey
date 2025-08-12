#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    vector<int> time(480,1);
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        int in,out;
        cin >> in >> out ;
        for (int j = in; j <= out; j++)
        {
            time[j]=0;
        }
        
    }
    
    int sum =accumulate(time.begin(),time.end(),0);
    cout << sum;

    return 0;
}