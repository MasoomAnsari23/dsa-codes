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

void ReccursiveDisplay(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<endl;
        ReccursiveDisplay(p->next);
    }
}

int main(){
    int A[]={2,3,5,3,2,1,4};
    create(A,7);
    ReccursiveDisplay(first);
    return 0;
}