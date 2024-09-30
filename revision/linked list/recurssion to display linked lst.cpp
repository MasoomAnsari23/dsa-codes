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
    if(p!=NULL){
        cout<<p->data<<endl;
        display(p->next);
    }
}

int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    display(first);
}