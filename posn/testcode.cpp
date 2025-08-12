#include <bits/stdc++.h>
using namespace std;

int main(){
	string str="12345";
	str+=str;
	for (int i = 0; i < 5; i++)
	{
		cout << str.substr(i,5)<<'\n';
	}
	
	return 0;
}