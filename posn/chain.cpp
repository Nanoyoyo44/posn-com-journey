#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int h;
	cin >> str >> h;
	int n=str.size(),start=0,end=0;
	for(int i=0;i<2*h+1;i++){
		for(int id=0;id<n;id++){
			if(id==0){
				start=0;
			}else{
				start=1;
			}
			if(id<n-1){
				end=2*h;
			}else{
				end=2*h+1;
			}
			for(int j=start;j<end;j++){
	//			cout << i<< "," << j << " ";
				if(abs(i-h)+abs(j-h)==h) {
					cout << str[id];
				}
				else if(j==1 && i==h && id>0) {
					cout << str[id-1];
				}
				else if(j==end-1 && i==h && id<n){
					cout << str[id+1];
				}
				else {
					cout << '.';
				}
			}	
		}
		cout << '\n';
	}
	return 0;
}
/*
luffy 5
*/