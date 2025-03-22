#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

int count(struct Node *p){
  if(p==0)
  return 0;
  else
  return count(p->next)+1;
}

void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}
void insert(struct Node *p, int index, int x){
    int i;
    struct Node *t;

    //checking index is valid or not
    if(index<0 || index>count(p)){
        return;
    }

    t=new Node;
    t->data=x;

    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(i=0; i<index-1; i++){
            p=p->next;
            t->next=p->next;
            p->next=t;
        }
    }
}

int main(){
    insert(first,0,12);
    insert(first,0,15);
    insert(first,2,25);
    display(first);
}