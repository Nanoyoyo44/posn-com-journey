#include <bits/stdc++.h>
using namespace std;

int arr[2000][2000],show[2000][2000];

int main(){
    deque<int> line;
    int n,r;
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int l = 0; l < 2*n; l++)
    {
        line.clear();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i+j==l) {
                    line.push_back(arr[i][j]);
                }
                // cout << i <<"," << j << " ";
            }
            // cout << '\n';
        }
        for (int m = 0; m < r; m++)
        {
            line.push_back(line.front());
            line.pop_front();
        }
        // cout << "-----------\n";
        int k=line.size();
        k--;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i+j==l){
                    if(i+j<n){
                        show[i][j]=line[i];
                    }else
                    {
                        // cout << line.size()-j;
                        show[i][j]=line[line.size()-k-1];
                        k--;
                    }
                }
            }
            // cout << '\n';
        }
        // for(auto c:line) cout << c << " ";
        // cout << '\n';
    }
    // cout << "============\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << show[i][j] << " ";
        }
        cout << '\n';
    }
    


    return 0;
}
/*

5 2
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5


7 1
63 10 48 97 41 55 14
67 51 59 94 59 66 22
56 71 18 97 22 34 2
22 90 25 96 35 16 97
12 55 24 40 63 42 24
27 59 49 82 23 13 63
24 39 10 86 23 50 2

*/