#include <bits/stdc++.h>
using namespace std;

typedef struct 
{
    string name;
    int gpa;
} kid;

struct node
{
    int data;
    struct node *next;

}node1={25,NULL};

typedef struct llst{
    int data;
    struct llst
}linklist;

int main(){
    int arr[5]={1,2,4,5,6};
    int a=2,b=3;
    int *p=&b;
    // p=&a;
    cout << p <<'\n' ;
    int *pnum;
    pnum=(int*)malloc(sizeof(int));
    pnum=&a;
    cout << *pnum << '\n';
    free(pnum);

    kid peter;
    peter.name="Peter";
    peter.gpa=4;
    // cout << peter.name;

    int value;
    struct node *pnode=&node1;
    // value =(*pnode).data;
    value=pnode->data;
    cout << value << '\n';
    return 0;
}