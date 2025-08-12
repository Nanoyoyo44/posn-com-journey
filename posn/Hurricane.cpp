#include <bits/stdc++.h>
using namespace std;

char show[1001][1001];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    memset(show,'.',sizeof(show));
    string str;
    cin >> str;
    if(str.size()==1){
        cout << str;
        return 0;
    }
    int l=str.size(),mnx=INT_MAX,mny=INT_MAX,mxx=INT_MIN,mxy=INT_MIN;
    int ss=0;

    show[500][500]=str[0];

    for (int i = 2; i <= l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int x,y;
            if(i==2){
                x=500+i-2-j-1;
                y=500+i-2-j;
            }
            if(i==3){
                x=500+i-2-2-2;
                y=500+1-j+1-4;
            }
            if(i==4){
                x=500+i-2+j-5;
                y=500+i-2-j+i-6-5;
            }
            if(i==5){
                x=500+i-2+j-i+3;
                y=500+i-2+i+2-15-4;
            }
            if(i==6){
                x=500-i+j-2+14;
                y=500-2+i+i+j-1-11-6-1;
            }
            if(i==7){
                x=500-i-2-1-i/2-1+26;
                y=500-2+i+j-1-1-5-1;
            }
            show[x][y]=str[j];
            mxx=max(mxx,x);
            mxy=max(mxy,y);
            mnx=min(mnx,x);
            mny=min(mny,y);
        }
    }

    for (int i = 2; i <= l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int x,y;
            if(i==2){
                x=500+i-2-j;
                y=500+i-2+j+i-1;
            }
            if(i==3){
                x=500+i-2-j-i;
                y=500+i-2+i-1;
            }
            if(i==4){
                x=500+i-2-j-7;
                y=500+i-2-j+1;
            }
            if(i==5){
                x=500-i-4;
                y=500+1-j+1-4+1;
            }
            if(i==6){
                x=500+i-2+j-12-1;
                y=500+i-2-j+i-10-2-5+1;
            }
            if(i==7){
                x=500+i-2+j-i-1;
                y=500+i-2+i-18-7+1;
            }
            show[x][y]=str[j];
            mxx=max(mxx,x);
            mxy=max(mxy,y);
            mnx=min(mnx,x);
            mny=min(mny,y);
        }
    }

    for (int i = 2; i <=l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int x,y;
            if(i==2){
                x=500+j;
                y=500-j-1;
            }
            if(i==3){
                x=500+i-1+j;
                y=500-i;
            }
            if(i==4){
                x=500+i+1+j;
                y=500-i+1+j;
            }
            if(i==5){
                x=500+i+i-1;
                y=500+1+j;
            }
            if(i==6){
                x=500+i-2-j+i-2+1;
                y=500+i-2+j+i-i+2;
            }
            if(i==7){
                x=500+i-2-j-i+4+1;
                y=500+i-2+i;
            }
            show[x][y]=str[j];
            mxx=max(mxx,x);
            mxy=max(mxy,y);
            mnx=min(mnx,x);
            mny=min(mny,y);
        }
    }
    
    // แฉกเดียว
    for (int i = 2; i <= l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int x,y;
            if(i==2){
                x=500+i-2+j+1;
                y=500+i-2+j;
            }
            if(i==3){
                x=500+i;
                y=500+1+j+1;
            }
            if(i==4){
                x=500+i-2-j+1;
                y=500+i-2+j+i-1;
            }
            if(i==5){
                x=500+i-2-j-i+1;
                y=500+i-2+i+2-1;
            }
            if(i==6){
                x=500-i-j-2+1+1;
                y=500-2+i+i-j-1;
            }
            if(i==7){
                x=500-i-2+1-1-i/2-1+1;
                y=500-2+i-j-1-1;
            }
            show[x][y]=str[j];
            mxx=max(mxx,x);
            mxy=max(mxy,y);
            mnx=min(mnx,x);
            mny=min(mny,y);
        }
    }

    for (int i = mnx; i <= mxx; i++)
    {
        for(int j = mny ; j<= mxy ;j++){
            cout << show [i][j];
        }
        cout << '\n';
    }
    return 0;
}
// ....EDCBA..........
// .........D.........
// ..........C........
// ...........B.......
// ............A.....E
// ............C.....D
// ....ACBA....B.....C
// ...B....B...A.....B
// ..C......A.B......A
// .D......AAA......D.
// A......B.A......C..
// B.....A...B....B...
// C.....B....ABCA....
// D.....C............
// E.....A............
// .......B...........
// ........C..........
// .........D.........
// ..........ABCDE....

// ....EDCBA..........
// .........D.........
// ..........C........
// ...........B.......
// ............A.....E
// ............C.....D
// ....ACBA....B.....C
// ...B....B...A.....B
// ..C......A.B......A
// .D......AAA......D.
// A......B.A......C..
// B.....A...B....B...
// C.....B....ABCA....
// D.....C............
// E.....A............
// .......B...........
// ........C..........
// .........D.........
// ..........ABCDE....
