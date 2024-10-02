#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first;

void create(int A[], int n){
    int i;
    struct node *t,*last;
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
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int insertnode(struct node *p,int index ,int x){
    int i;
    struct node *t;
    t=new node;
    t->data=x;
    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(i=0; i<index-1; i++){
          p=p->next;
          t->next=p->next;
          p->next=t;
        }
    }

}

int main(){
    int A[]={2,6,3,5,7,8,9};
    create(A,7);
    display(first);
    insertnode(first, 0, 23);
    cout<<"after insertion "<<endl;
    display(first);
}