#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void create(int A[], int n){
    struct Node *t, *last;
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;

    for (int i=1; i<n ;i++){
        t=new Node;
        t->data=A[i];
        t->next=head;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p){
    if(!p) return;
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);
}

int length(struct Node *p){
    int len=0;
    if(p==NULL)
    return 0;
    do{
        len++;
        p=p->next;
    }while(p!=head);
    return len;
}

void insert(struct Node *p, int index, int x){

    //for valid index
    if(index<0 || index>length(head))
    return;

    struct Node *t=new Node;
    t->data=x;

    //for index =0
    if(index==0){
        if(head==NULL){
            head=t;
            head->next=head;
        }

        //if head!=NULL
        else{
            while(p->next!=head)
            p=p->next;
            p->next=t;
            t->next=head;
            head=t;
        }
    }
        //if index is other then 0
        else {
            for(int i=0; i<index-1;i++){
                p=p->next;
            }
                t->next=p->next;
                p->next=t;
            }
}

int main(){
    int A[]={2,3,4,9,23,49};
    create(A,6);
    insert(head,3,91);
    display(head);
    return 0;
}