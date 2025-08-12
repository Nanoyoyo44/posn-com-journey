#include <bits/stdc++.h>
using namespace std;;

unordered_map<int,int> hashmap;

// vector<int> num={1,0};
int re(int n){
    for (int i = 3; i <= n; i++)
    {
        hashmap[i]=3*hashmap[i-1]-2*hashmap[i-2];
    }
    return hashmap[n];
    // return re(n-1)-3;
}

int main(){
    hashmap[1]=3;
    hashmap[2]=5;
    cout << re(4);

}