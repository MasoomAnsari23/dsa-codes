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

void display(struct Node *p){//recursion used
    if(p!=NULL){
        display(p->next);
        cout<<p->data<<endl;
    }
}

int main(){
    int A[]={23,49,12,23,45};
    create(A,5);
    display(first);
    return 0;
}