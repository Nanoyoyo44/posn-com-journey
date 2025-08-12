#include <bits/stdc++.h>
using namespace std;

void printq(queue<int>& q){
    for (int i = 0; i < q.size(); i++)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int q,k,n;
    cin >> q ;
    for (int j = 0; j < q; j++)
    {
        cin >> n >> k;
        queue<int> qq;
        for (int i = 0; i < n; i++)
        {
            qq.push(i+1);
        }
        int r=0;
        while (qq.front()!=k)
        {
            for (int i = 0; i < q; i++)
            {
                qq.push(qq.front());
                qq.pop();
            }
            r++;
        }
        cout << r << '\n';
        
    }
    
    return 0;
}
