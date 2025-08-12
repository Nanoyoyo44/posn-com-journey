#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> deck;
    int m,n,k;
    string str;
    cin >> m >> k >> n >> str;
    for (int i = 0; i < m; i++)
    {
        deck.push_back(i);
    }
    // cout << deck.front();
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='A'){
            deck.push_back(deck.front());
            deck.pop_front();
        }else{
            deck.push_back(deck[1]);
            deck.erase(deck.begin()+1);
        }
        // for(auto i: deck) cout << i <<' ';
        // cout << ": " << str[i];
        // cout << "\n------------\n";
    }
    cout << deck[k-1] << '\n';
    cout << deck[k] << '\n';
    cout << deck[k+1] << '\n';
    return 0;
}