#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *S;
};

void create(struct stack *st){
cout<<"enter size of stack"<<endl;
cin>>st->size;
st->top=-1;
st->S=new int[st->size];
}

void display(struct stack st){
    if(st.top==-1){
        cout<<"stck is empty"<<endl;
        return;
    }
    else{
        cout<<"element from top to bottom"<<endl;
        for(int i=st.top; i>=0; i--){
            cout<<st.S[i]<<endl;
        }
    }
}

void push(struct stack *st, int x){
    if(st->top==st->size-1){
        cout<<"stack overflow"<<endl;
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct stack *st){
  int x=-1;
  if(st->top==-1){
    cout<<"stack underflow"<<endl;
  }
  else{
    x=st->S[st->top--];
  }
  return x;
}

int peek(struct stack st, int index){
    int x=-1;
    if((st.top-index +1)<0){
        cout<<"invalid index"<<endl;
    }
    else{
        x=st.S[st.top-index+1];
    }
    return x;
}

int isFull(struct stack st){
    return st.top==st.size-1;
}

int isEmpty(struct stack st){
    if(st.top==-1)
    return 1;
    else
    return 0;
}

int main(){
    struct stack st;
    isEmpty(st);
    create(&st);
    display(st);
    push(&st,23);
    push(&st,49);
    push(&st,23);
    push(&st,56);
    display(st);
    pop(&st);
    display(st);
    isEmpty(st);
    isFull(st);
    return 0;
}

//output: enter size of stack
//        4
//        stck is empty
// element from top to bottom
//        56
//        23
//        49
//        23
// element from top to bottom
//        23
//        49
//        23