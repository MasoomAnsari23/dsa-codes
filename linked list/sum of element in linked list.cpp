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

int add(struct node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return(sum);
}

int main(){
    int A[]={2,3,4,5,1};
    create(A,5);
    display(first);
    cout<<add(first);
}