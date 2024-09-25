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

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
 while(p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
 }
}

int count(struct node *p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return(c);
}

int main(){
    int A[]={3,4,5,6,7,8,9};
    create(A,7);
    display(first);
    cout<<count(first)<<" is no of nodes in linked list"<<endl;
    return 0;
}
