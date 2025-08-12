#include <bits/stdc++.h>
using namespace std;
string show[1001][1001];
void draw(int n,string str,int x,int y){
	for(int i=1;i<=2*n;i++){
		for(int j=n+1+1;j<=2*n+1;j++){
			if(abs(i-n-1)+abs(j-n-1)<=n) {
                string s="";
                s+=str[abs(abs(i-n-1)+abs(j-n-1)-n)];
                show[i+x][j+y]=s;
            }
		}
	}
}

void print(int a,int b){
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			cout << show[i][j];
		}
		cout << '\n';
	}
	
}

int main(){
    for (int i = 0; i < 1001; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            show[i][j]=".";
        }
        
    }
    
	string str;
	cin >> str;
	int n=str.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
		draw(n,str,-1+(2*n)*i-n*j,-5+n*j);
	}
	}
	print(100,100);
	return 0;
}