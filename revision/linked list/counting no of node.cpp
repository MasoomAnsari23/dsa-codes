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
    // iterative
    while(p!=NULL){
        c++;
        p=p->next;
    }
     return(c);
    //recursive
    if(p==0){
        return 0;
    }
    else{
        return count(p=p->next)+1;
    }
    return(c);
}
int main(){
    int A[]={23,49,56,34};
    create(A,4);
    display(first);
    cout<<"no of nodes in linked list is "<<count(first);
}