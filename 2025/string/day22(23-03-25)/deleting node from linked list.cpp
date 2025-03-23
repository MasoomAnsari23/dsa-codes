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

int count(struct Node *p){
    if(p==0)
        return 0;
    else
    return count(p->next)+1;    
}

int deleteNode(struct Node *p,int index){
    struct Node *q;
    int x=-1, i;

    if(index<1 || index>count(first))//invalid indedx
    return -1;

    if(index==1){
        q=first;
        x=first->data;
       first=first->next;
       delete q;
       return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}

int main(){
    int A[]={23,3,49,4,2,9};
    create(A,6);
    deleteNode(first,1);//index
    display(first);
    return 0;
}