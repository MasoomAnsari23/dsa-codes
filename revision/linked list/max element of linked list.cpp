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

int max(struct node *p){
  int mx=-82767;
  while(p){
    if(p->data>mx)
    mx=p->data;
    p=p->next;
  }
  return mx;
}

int main(){
    int A[]={2,36,4,5,6,7,8};
    create(A,7);
    display(first);
    cout<<"max of linked list is "<<max(first);
}