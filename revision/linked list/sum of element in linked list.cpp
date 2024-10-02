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
    if(p!=NULL){
        cout<<p->data<<endl;
        display(p->next);
    }
}

int sum(struct node *p){
    int s=0;
    while(p){
        s=s+p->data;
        p=p->next;
    }
    return (s);
}

int Rsum(struct node *p){
    int sm=0;
    if(p==0){
        return 0;
    }
    else{
        return Rsum(p->next)+p->data;
    }
    return(sm);
}

int main(){
    int A[]={34,49,2,3,4,9};
    create(A,6);
    display(first);
    cout<<"sum of elment of linked list is "<<sum(first)<<endl;
    cout<<"Rsum of elment of linked list is "<<Rsum(first);
    return 0;
}