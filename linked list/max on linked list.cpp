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
    while(p!=0){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int max(struct node *p){
    int max=-32768;
    while(p){
        if(p->data>max)
        max=p->data;
        p=p->next;
    }
    return(max);
}

int main(){
    int A[]={2,3,4,12,34,6,012,9};
    create(A,8);
    display(first);
    cout<<max(first)<<" max of linked list element"<<endl;
    return 0;
}