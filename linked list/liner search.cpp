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
   while(p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
   }
}

int bsearch(struct node *p, int key){
 while(p!=NULL){
    if(key==p->data)
    return p->data;
    p=p->next;
 }
 return 0;
}

int main(){
    int A[]={23,49,2,3,4,9};
    create(A,6);
    display(first);
   cout<<"bineary search is found "<<bsearch(first,233)<<endl;
}