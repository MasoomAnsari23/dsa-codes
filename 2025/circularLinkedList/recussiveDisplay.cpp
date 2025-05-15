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
    head->next=head;//circular link
    last=head;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=head;
        last->next=t;
        last=t;
    }
}
 void RDisplay(struct Node *h){
    static int flag=0;
    if(h != head || flag==0){
        flag=1;
        cout<<h->data<<endl;
        RDisplay(h->next);
    }
    flag=0;
 }

 int main(){
    int A[]={2,3,5,4,6,7};
    create(A,6);
    RDisplay(head);
    return 0;
 }