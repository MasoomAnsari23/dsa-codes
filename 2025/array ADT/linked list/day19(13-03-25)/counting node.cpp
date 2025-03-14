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

//method 1
int count(struct Node *P){
 if(P==0){
    return 0;
 }
 else
  return count(P->next)+1;
}

//method 2(recursive)
int ccount(struct Node *p){
    if(p!=0)
    return 1+ccount(p->next);
    else
    return 0;
}

int main(){
    int A[]={12,34,12,34,45,56,56,6};
    create(A,8);
    cout<<count(first)<<endl;;
    cout<<ccount(first)<<endl;;
}