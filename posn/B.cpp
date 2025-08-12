#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int h;
    // int arr[101];
    cin >> h;
    for (int i = 0; i < h; i++)
    {
        int n;
        cin >> n;
        if(n%2!=0){
            for (int i = 0; i < n; i++)
            {
                for (int l = 0; l < 2; l++)
                {
                    int end=n;
                    if(l==1) end = n/2;
                    for (int j = 0; j < end; j++)
                    {
                        if(abs(i-n/2)+abs(j-n/2)==n/2 || (l==1 && j==end-1 && (abs(i-n/2)+abs(j-n/2)<n/2))) cout << '#';
                        else if(abs(i-n/2)+abs(j-n/2)<n/2) cout << '=';
                        else cout << '.';
                        
                    }
                }
                cout << '\n';   
            }
        }else{
            for (int i = 0; i < n; i++)
            {
                for (int l = 0; l < 2; l++)
                {
                    int end=n;
                    if(l==1) end = n/2-1;
                    for (int j = 0; j < end; j++)
                    {
                        // cout << i << ',' << j;
                        if(i==j+n/2 || i==-j+n/2-1 || i==j-n/2 || i==-j+n/2+n-1 || (l==1 && j == end-1 && (i<j+n/2 && i>-j+n/2-1 && i>j-n/2 && i<-j+n/2+n-1))) cout << '#';
                        else if(i<j+n/2 && i>-j+n/2-1 && i>j-n/2 && i<-j+n/2+n-1) cout << '=';
                        else cout << '.';
                    }
                }
                cout << '\n';   
            }
        }
    }
    return 0;
}