#include<iostream>
using namespace std;
 
struct Node{
    int data;
    struct Node *next;
}*first=NULL;

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

//reversing using array or called as reversing element
void Reverse1(struct Node *p, int n){
  int *A=new int[n];
  int i=0;
  struct Node *q=p;

  //storing data into array
  while(q!=NULL){
    A[i]=q->data;
    q=q->next;
    i++;
  }
  q=p;
  i--;

  //put array element back in reverse
  while(q!=NULL){
    q->data=A[i];
    q=q->next;
    i--;
  }
  delete[] A;
}

int main(){
    int A[]={2,4,6,8,10};
    create(A,5);
    Reverse1(first,5);
    display(first);
    return 0;
}