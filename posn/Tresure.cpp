#include <bits/stdc++.h>
using namespace std;


int main(){
    string u;
    int n=0;
    double x=0,y=0;
    do{
        cin >> u;
        if( u[0] != '*'){
            int num = stoi(u.substr(u.find_first_of("0123456789")));
            // cout << num << '\n';
            string dir = u.substr(u.find_first_not_of("1234567890"));
            if(dir=="N") 
                y+= num;
            if(dir=="NE") {
                x+= ((num)*sqrt(2))/2;
                y+= ((num)*sqrt(2))/2;
            }
            if(dir=="E")
                x+= num;
            if(dir=="SE") {
                x+= ((num)*sqrt(2))/2;
                y-= ((num)*sqrt(2))/2;
            }
            if(dir=="S") 
                y-= num;
            if(dir=="SW") {
                x-= ((num)*sqrt(2))/2;
                y-= ((num)*sqrt(2))/2;
            }
            if(dir=="W")
                x-= (u[0])-'0';
            if(dir=="NW"){ 
                x-= (((u[0])-'0')*sqrt(2))/2;
                y+= (((u[0])-'0')*sqrt(2))/2;
            }
            // cout << x << ' ' << y << '\n';
            n++;
        }else{
            break;
        }
    }while(1);
    cout << fixed << setprecision(3) << x <<' ' << y << '\n' << setprecision(3) << sqrt(pow(x,2)+pow(y,2));
    
    return 0;
}