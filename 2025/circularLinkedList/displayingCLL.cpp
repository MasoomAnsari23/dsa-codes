#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void create(int A[], int n){
    int i;
    struct Node *t,*last;

    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=head;
        last->next=t;
        last=t;
    }
}

void display(struct Node *h){
    if(h==NULL)
    return;
    struct Node *p=h;
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);
}

int main(){
    int A[]={2,4,5,6,8,9};
    create(A,6);

    display(head);
    return 0;
}