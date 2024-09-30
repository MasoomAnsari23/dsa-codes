//creating linked list
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first;

void create(int A[], int n){
    int i;
    struct node *t, *last;

   first=new node;
   first->data=A[0];
   first->next=NULL;
   last=first;

   for(i=1; i<n; i++){
    t=new node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
   }
}

void display(struct node *p){
    while(p!=0){
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main(){
    int A[]={2,3,4,5};
    create(A,4);
    display(first);
    return 0;
}

// //revising
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

//     for(i=0;i<n;i++){
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
//     int A[]={2,5,7,8,4,5};
//     create(A,5);
//     display(first);
// }
