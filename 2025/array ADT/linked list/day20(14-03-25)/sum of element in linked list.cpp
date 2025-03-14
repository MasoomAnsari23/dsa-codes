#include<iostream>
using namespace std;

struct Node{
 int data;
 struct Node *next;
}*first;

void create(int A[], int n){
    int i;
    struct Node *t, *last;

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

int sum(struct Node *p){
  int sum=0;
  while(p){
    sum=sum+p->data;
    p=p->next;
  }
  return sum;
}

//sum using recursion
int Rsum(struct Node *p){
  if(p==0)
  return 0;
  else
  return Rsum(p->next)+p->data;
}

int main(){
    int A[]={23,49,2,3,4,9};
    create(A,6);
    cout<<"element of linked list are:"<<endl;
    display(first);
    cout<<"sum of element of linked list is :"<<sum(first)<<endl;
    cout<<"sum of element of linked list is :"<<Rsum(first);
}