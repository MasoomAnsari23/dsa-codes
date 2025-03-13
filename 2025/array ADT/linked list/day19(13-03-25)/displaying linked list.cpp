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

int main(){
    int A[]={2,34,12,34,56,7};
    create(A,6);
    display(first);
    return 0;
}