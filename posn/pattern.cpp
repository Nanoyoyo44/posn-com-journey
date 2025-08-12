#include<bits/stdc++.h>
using namespace std;

char show[1000][60000];

void draw(int seq,char c,int n,int x,int y){
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2*n-1; j++)
		{
			if(j==1 && i ==n) show[i+y][j+x] = char(seq+'0');
			else if(j-i<n && i+j>n) show[i+y][j+x]=c;
		}
		
	}
	
}

void print(int a,int b){

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <=b; j++)
		{
			cout << show[i][j];
		}
		cout << '\n';
	}
	
}

int main(){
	int n=4,s=2;
	cin >> n >> s;
	s++;
	char arr[2]={'*','o'};
	memset(show , '.', sizeof show);
	for (int j = 0; j < 2*s; j++)
	{
		for (int i = 0; i < n; i++)
		{
			draw(i+1,arr[i%2],s,(2*s-1)*i-j*i,j*s);
		}
	}
	s--;
	print((2*(s)+1+1)*(s+1),n*(2*s+1));
	return 0;
}
/*
4
1 1 10
2 3 9
3 5 25
2 20 2
*/