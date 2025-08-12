#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector <pair<int,int>> kids;
    vector <pair<int,int>> line;
    int clas,n;
    cin >> clas >> n;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        kids.push_back(make_pair(a,b));
    }
    while(1){
        char c;
        cin >> c;
        if(c=='X') break;
        else{
            if(c=='E'){
                int x;
                cin >> x;
                if(line.empty()){
                    for(auto i:kids){
                        if(i.second==x){
                            line.push_back(i);
                        }
                    }
                }else{
                    
                }
                
            }
            else if(c=='D'){
                
            }
        }
    }
    cout << 0;
    return 0;
}