#include<iostream>
using namespace std;

//struct node
struct node{
    int data;
    struct node*next;
}*first;

void create(int A[], int n){
    int i;
    struct node *t,*last;
first=new node;
first->data=A[0];
first->next=NULL;
last=first;

for(i=1;i<n;i++){
    t=new node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    int A[]={2,3,4,6,2,4,6,2,56,2};
    create(A,10);
    display(first);
    return 0;
}


//practice
// #include<iostream>
// using namespace std;

// struct node{
//     int data;
//     struct node *next;
// }*first;

// void create(int A[], int n){

//     int i;
//     struct node *t, *last;
//     first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1; i<n ; i++){
//         t=new node;
//         t->data=A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }
// }

// void display(struct node *p){
//     while(p!=NULL){
//         cout<<p->data<<endl;
//         p=p->next;
//     }
// }

// int main(){
//     int A[]={23,34,56,677,798898,44,90,56};
//     create(A,8);
//     display(first);
//     return 0;
// }