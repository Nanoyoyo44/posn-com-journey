#include <bits/stdc++.h>
using namespace std;

int n=2*2;

int main(){
    int arr[]={1,2,3,4,5,2,2,3,3,5,5,5,5,1,1,1};
    int n=sizeof arr/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    vector<int>::iterator ptr;
    for(auto i=v.begin();i<v.end();i++){
        cout << *i << " ";
    }
    cout << '\n';
    sort(v.begin(),v.end());
    cout << "after sort :";
    for(auto i=v.begin();i<v.end();i++){
        cout << *i << " ";
    }
    cout << '\n';
    pair<vector<int>::iterator,vector<int>::iterator> ip;
    ip=equal_range(v.begin(),v.end(),1);
    cout << ip.first-v.begin() << " " << ip.second-v.begin()-1 << "\n\n";
    vector<int>::iterator l=lower_bound(v.begin(),v.end(),2),u=upper_bound(v.begin(),v.end(),2);
    cout <<"lower bound : "<< l-v.begin() << '\n';
    cout <<"uppr bound : "<< u-v.begin() << '\n';
    float xx=pow(43,6);
    cout << xx;
    // ptr=v.begin();
    // cout << *ptr << '\n';
    // advance(ptr,3);
    // cout << *ptr << '\n';
    return 0;
}