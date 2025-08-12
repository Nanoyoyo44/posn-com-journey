#include<bits/stdc++.h>
using namespace std;

char show[1001][1001];

int main(){
	string str;
    int x=0,y=0;
	cin >> str;
	int n=str.size(),id,k,start=0;
    for(int c=0;c<n;c++){
		for(int i=n-1;i<2*n-1;i++){
            for(int ll=0;ll<n*c;ll++){
                show[x][y]='.';
                x++;
            }
            for (int k = 0; k < n-c; k++)
            {
				for(int j=0;j<=2*n-1;j++){
					if(abs(i-n+1)+abs(j-n+1)<=n-1){
						show[x][y]=str[abs(abs(i-n+1)+abs(j-n+1)-n+1)];
                        x++;
					}else {
                        show[x][y]='.';
                        x++;
                    }
				}
            }
            for(int ll=0;ll<n*c;ll++){
                show[x][y]='.';
                x++;
            }
			// cout << '\n';
            y++;
            x=0;
            for(int j=0;j<2*n*n;j++){
                show[x][y]='.';
                x++;
            }
            // cout << '\n';
            y++;
            x=0;
		}
    }
    int a =2*n*n;
    for(int i=0;i<a;i++){
        for(int j=0;j<a-1;j++){
            cout << show[i][j];
        }
        cout << '\n';
    }
	return 0;
}