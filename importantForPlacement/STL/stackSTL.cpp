#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>St;
    if(St.empty()){
    cout<<"stack is empty "<<endl;
    }
    St.push("masoom");
    St.push("sahid");
    St.push("sajjad");
    St.push("asif");
    cout<<"stack after push top element : "<<St.top()<<endl;
    cout<<"size before pop and after push :"<<St.size()<<endl;

    St.pop();
    cout<<"stack after pop top element is : "<<St.top()<<endl;
    cout<<"size after pop is : "<<St.size()<<endl;
}