#include <bits/stdc++.h>
using namespace std;

char numspad[4][3]{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    {'*','0','#'},
};

const int dy[]={-1,-1,-1,0,0,1,0,1},dx[]={-1,0,1,-1,1,-1,1,1};

int main(){
    string str;
    int posx,posy;
    cin >> str;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(str[0] == numspad[i][j]){
                posx=i;
                posy=j;
                break;
            }
        }    
    }
    
    for (int i = 1; i < str.size(); i++)
    {
        if(str[i]=='q'){
            posx--;
            posy--;
        }else if (str[i]=='w')
        {
            posy--;
        }else if (str[i]=='e')
        {   
            posx++;
            posy--;
        }else if (str[i]=='a')
        {   
            posx--;
        }else if (str[i]=='d')
        {   
            posx++;
        }else if (str[i]=='z')
        {   
            posx--;
            posy++;
        }else if (str[i]=='x')
        {   
            posy++;
        }else if (str[i]=='c')
        {   
            posx++;
            posy++;
        }
        cout << numspad[posy][posx];
    }
    

    return 0;
}