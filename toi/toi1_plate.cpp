#include <bits/stdc++.h>
using namespace std;

bitset<12> mark;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    queue<int> clas[11],line;
    unordered_map<int,int> std;
    int nc,ns;
    cin >> nc >> ns;
    while (ns--)
    {
        int a,b;
        cin >> a >> b;
        std[b]=a;
    }
    char key;
    while (cin >> key)
    {
        int id;
        if(key=='X'){//last command
            break;
        }
        else if (key=='E')//get in line
        {
            cin >> id;
            clas[std[id]].push(id);
            if(!mark[std[id]]){
                line.push(std[id]);
                mark[std[id]]=1;
            }
        }else if (key=='D')// first out
        {
            if(line.empty()){
                cout << "empty";
            }else{
                cout << clas[line.front()].front();
                clas[line.front()].pop();
                if(clas[line.front()].empty()){
                    mark[line.front()]=0;
                    line.pop();
                }
            }
        cout << '\n';
        }
    }
    cout << 0;
    return 0;
}
/*
2 6
1 41
1 42
1 43
2 201
2 202
2 203
E 41
E 201
D
E 202
E 42
E 43
D
E 203
D
D
D
X
*/