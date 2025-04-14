#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

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

void create2(int B[], int n){
    int i;
    struct Node *t,*last;
    second=new Node;
    second->data=B[0];
    second->next=NULL;
    last=second;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=B[i];
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

void concatenation(struct Node *p, struct Node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
        p->next=q;
}

int main(){
    int A[]={2,3,4,9,23,49};
    int B[]={23,49,2,3,4,9};

    create(A,6);
    cout<<"first linked list:"<<endl;
    display(first);
    create2(B,6);
    cout<<"second linked list:"<<endl;
    display(second);

    concatenation(first,second);
    cout<<"concatenation of first and second :"<<endl;
    display(third);

    return 0;
}