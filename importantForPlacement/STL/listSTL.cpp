#include<iostream>
#include<list>
using namespace std;

int main(){
    cout<<"creating blank list L1 "<<endl;
    list<int>L1;
    if(L1.empty()){
        cout<<"B1 is empty list "<<endl;
    }

    list<int>L2={2,3,4,9};
    L2.push_back(23);
    L2.push_front(49);
    cout<<"size of list L2 is : "<<L2.size()<<endl;
    cout<<"list after push back and front : ";
    for(int x: L2)cout<<x<<" ";
    cout<<endl;
    L2.pop_back();
    L2.pop_front();
    cout<<"list L2 after pop back and front : ";
    for(auto it=L2.begin();it!=L2.end();it++){
        cout<<*it<<" ";
    }

    L2.reverse();
    cout<<"list L2 after reverse : ";
    for(int x: L2){
        cout<<x<<" ";
    }
    cout<<endl;

    L2.sort();
    cout<<"list after sorting L2 :";
    for(int y:L2){
        cout<<y<<" ";
    }
    cout<<endl;
    
}