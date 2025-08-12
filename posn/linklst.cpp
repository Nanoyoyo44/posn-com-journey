#include <bits/stdc++.h>
using namespace std;

// typedef struct lklst{
//     int value;
//     struct lklst *next;
// }linklist;

// linklist *getnode(){
//     return (linklist*)malloc(sizeof(linklist));
// }

typedef struct linklist
{
    int value;
    struct linklist* next;
} node;

struct lst
{
    int data;
    struct lst *next;   
};


node *getnode(){
    return (node*)malloc(sizeof(node));
}
int main(){
    // linklist *head=NULL;
    // head=getnode();
    // head->value=23;
    // head->next=NULL;
    // cout << head->value;
    
    // int a;
    // node *n1,*n2,*n3,*n4,*n5;
    // n1=getnode();
    // n2=getnode();
    // n3=getnode();
    // n4=getnode();
    // n5=getnode();

    // cin >> a;
    // n1->value=a;
    // n1->next=NULL;

    // cin >> a;
    // n2->value=a;
    // n2->next=n1;

    // cin >> a;
    // n3->value=a;
    // n3->next=n2;

    // cin >> a;
    // n4->value=a;
    // n4->next=n3;

    // cin >> a;
    // n5->value=a;
    // n5->next=n4;

    // node *ptr=n5;
    // while (ptr!=NULL)
    // {
    //     cout << ptr->value << '\n';
    //     ptr=ptr->next;
    // }

    struct lst n1,n2,n3,n4,n5;
    struct lst *head=&n1;
    // n1.data=100;

    return 0;
}