#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t;
    t=new Node;

    if(t==NULL){
        cout<<"stack is full"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop(){
    struct Node *t;
    int x=-1;
    if(top==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;
}

void display(){
    struct Node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    push(23);
    push(49);
    push(56);
   cout<<"display after push top to bottom" <<endl;
    display();
    pop();
    cout<<"display after pop1 top to bottom"<<endl;
    display();
    pop();
    cout<<"display after pop2 top to bottom"<<endl;
    display();
    return 0;
}
//output:
// display after push top to bottom
//    56
//    49
//    23
// display after pop1 top to bottom
//    49
//    23
// display after pop2 top to bottom
//    23