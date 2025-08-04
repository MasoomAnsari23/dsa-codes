//creating BST
#include<iostream>
using namespace std;

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

void insert(int key){
    struct Node *t=root;
    struct Node *r,*p;
    
if(root==NULL){
    p=new Node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    root=p;
    return;
}

while(t!=NULL){
    r=t;
    if(key < t->data)
    t=t->lchild;
    
    else if(key> t->data)
    t=t-> rchild;

    else 
    return;
}

p=new Node;
p->data=key;
p->lchild=p->rchild=NULL;

if(key< r->data)
r->lchild=p;
else r->rchild=p;
}

void inorder(struct Node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

//searching for node
struct Node *search(int key){
    struct Node *t=root;
    while(t!=NULL){
        if(key==t->data)
        return t;
        else if(key < t->data)
        t=t->lchild;
        else
        t=t->rchild;
    }
    return NULL;
}
int main(){
    struct Node *temp;
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);
    inorder(root);
    cout<<endl;
    temp=search(20);
    if(temp!=NULL) 
    cout<<"element is found "<<temp->data<<endl;
    else
    cout<<"element not found "<<endl;
    return 0;
}

//output:5 8 10 20 30 
//element is found 20