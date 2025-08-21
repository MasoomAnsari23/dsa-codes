#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>Q;
    if(Q.empty()){
        cout<<"queue is empty "<<endl;
    }
    Q.push("masoom");
    Q.push("asif");
    Q.push("sajjad");
    Q.push("sahid");
    cout<<"size of queue after push "<<Q.size()<<endl;
    cout<<"front element of queue is : "<<Q.front()<<endl;
    cout<<"back element of queue is : "<<Q.back()<<endl;

    Q.pop();
    cout<<"size after pop :"<<Q.size()<<endl;
    cout<<"front element of queue is : "<<Q.front()<<endl;
    cout<<"back element of queue is : "<<Q.back()<<endl;
}