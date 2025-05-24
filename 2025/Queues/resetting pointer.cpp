#include<iostream>
using namespace std;

class Queue{
    private:
    int size;
    int front;
    int rear;
    int *Q;

    public:
    Queue(){
        front=rear=-1;
        size=10;
        Q=new int[size];
    }

    Queue(int size){
        front=rear=-1;
        this->size=size;
        Q=new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void reset();
    void display();
};

void Queue::enqueue(int x){
    if(rear==size-1){
        cout<<"queue is full"<<endl;
    }
    else{
        rear++;
        Q[rear]=x;
    }
}

int Queue::dequeue(){
    int x=-1;
    if(rear==front){
        cout<<"queue is empty"<<endl;
    }
    else{
        front++;
        x=Q[front+1];
    }
    return x;
}

void Queue::display(){
    for(int i=front+1; i<=rear; i++){
        cout<<Q[i]<<endl;
    }
}

void Queue::reset(){
     rear=front=-1;
}

int main(){
    Queue q(5);
    q.enqueue(23);
    q.enqueue(32);
    q.enqueue(34);
    q.enqueue(49);
    q.enqueue(23);
    q.enqueue(23);
    q.display();
    q.reset();
    cout<<"after reset"<<endl;
    q.enqueue(2);
    q.display();
}