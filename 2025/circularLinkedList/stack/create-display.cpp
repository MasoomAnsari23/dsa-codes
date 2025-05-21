#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *S;
};

void create(stack *st){
    cout<<"enter size of stack"<<endl;
    cin>>st->size;
    st->top=-1;
    st->S=new int[st->size];
}

void push(stack *st, int x){
    if(st->top==st->size-1)
    cout<<"stack overflow"<<endl;

    else{
        st->top++;
        st->S[st->top]=x;
    }
}

void display(struct stack st){
if(st.top==-1){
    cout<<"stack is empty"<<endl;
    return;
}
    
cout<<"stack elements tom to bottom :"<<endl;
    for(int i=st.top; i>=0; i--)
    cout<<st.S[i]<<endl;
}

int main(){
    struct stack st;
    create(&st);
    push(&st,5);
    push(&st,4);
    push(&st,3);
    push(&st,2);
    display(st);
    return 0;
}

