#include <bits/stdc++.h>
using namespace std;

int arr[200][200];

int main(){
    int n,m,r;
    cin >> n >> m ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        int type,in,num;
        cin >> type >> in >> num;
        if(type==1){
            for (int j = 0; j < m; j++)
            {
                arr[in-1][j]=num;
            }
            
        }else{
            for (int j = 0; j < n; j++)
            {
                arr[j][in-1]=num;
            }
            
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    

    return 0;
}