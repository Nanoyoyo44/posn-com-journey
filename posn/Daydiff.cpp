#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int month[12]={31,28,31,30,31,31,30,31,30,31};
    int st_month,st_day,end_month,end_day,sum=0;
    cin >> st_day >> st_month >> end_day >> end_month;
    for(int i=st_month-1;i<end_month-1;i++){
        sum+=month[i];
    }
    sum+=end_day;
    sum-=st_day;
    cout << sum+1;
    return 0;
}