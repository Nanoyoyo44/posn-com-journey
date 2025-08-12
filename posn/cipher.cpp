#include<bits/stdc++.h>
using namespace std;

int main(){
    char key;
    string lock,en;
    cin >> key >> en >> lock;
    int shift = (key=='e') ? 1:-1;
    for (int i = 0; i < lock.size(); i++)
    {
        cout << char((lock[i]-'a'+shift*(en[i%en.size()]-'a')+26*100)%26+'a');
    }
    return 0;
}