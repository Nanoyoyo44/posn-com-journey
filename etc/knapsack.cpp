#include <bits/stdc++.h>
using namespace std;

struct item{
    int weight;
    int value;
    int ratio;
};

struct node{
    int level;
    int profit;
    int weight;
    int bound;
};

bool compareitem(item a,item b){
    return a.ratio > b.ratio;
}

double bound(node u ,int n,int W ,vector<item> items){
    if(u.weight >=W){
        return 0;
    }

    double profit_bound=u.profit;
    int j=u.level+1;
    int total_weight=u.weight;

    while (j<n && total_weight +items[j].weight <=W)
    {
        total_weight+=items[j].weight;
        profit_bound+=items[j].value;
        j++;
    }

    if(j<n){
        profit_bound+=(W-total_weight)*items[j].ratio;
    }

    return profit_bound;
    
}

int kanpsackBnB(int W,vector<int> items,int n){
    node u,v;
    queue<node> Q;
    u.level=-1;
    u.profit=0;
    u.weight=0;
    u.bound=bound(u,n,W,items);

    Q.push(u);

    int maxProfit =0;

    while (!Q.empty())
    {
        u=Q.front();
        Q.pop();
        
        if(u.level == n-1){
            continue;
        }

        v.level = u.level+1;
        v.weight = u.weight+items[v.level].weight;
        v.profit = u.profit + items[v.level].value;

        if(v.weight<=W && v.profit > maxProfit){
            maxProfit=v.profit;
        }

        v.bound=bound(v,n,W,items);
        if(v.bound>maxProfit){
            Q.push(v);
        }
    }
    return maxProfit;

}

int main(){
    int W=240;

    return 0;
}