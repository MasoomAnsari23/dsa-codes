#include<iostream>
using namespace std;

struct Node{
     int data;
      struct Node *next;
}*first;

void create(int A[], int n){
    struct Node *t, *last;
    int i;

    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int isSorted(struct Node *p){
    int x=-65536;
    while(p!=NULL){
        if(p->data<x)
        return 0;

        x=p->data;
        p=p->next;
    }
    return 1;
}

int main(){
    int A[]={2,3,4,9,23,49};
    create(A,6);
    display(first);
    cout<<"0 is unsorted and 1 is sorted ::"<<isSorted(first);
    return 0;
}