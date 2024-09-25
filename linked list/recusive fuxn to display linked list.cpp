#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    }*first;

void create(int A[], int n){
    int i;
    struct node *t, *last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n; i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){   
    if(p!=0){
        cout<<p->data<<endl;//printing then calling
       display(p->next); //reccurssive
    }
}

void display2(struct node *p){
    if(p!=0){
        display2(p->next);//calling then printing
        cout<<p->data<<endl;//reccurssion
    }
}

int main(){
    int A[]={2,3,4,5,6,7,8,9,1,01,12};
    create(A,11);
    display(first);
    display2(first);
    return 0;
}
