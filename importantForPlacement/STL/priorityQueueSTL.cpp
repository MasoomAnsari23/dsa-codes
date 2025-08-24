#include<iostream>
#include<queue>
using namespace std;

int main(){
    cout<<"dealing with max heap "<<endl;
    priority_queue<int>maxheap;
    if(maxheap.empty()){
       cout<<"now max heap is empty"<<endl;
       cout<<"now ,size of max heap is : "<<maxheap.size()<<endl;
    }

    maxheap.push(23);
    maxheap.push(49);
    maxheap.push(30);
    maxheap.push(3);
    maxheap.push(2);

    cout<<"after push() ,size of max heap is : "<<maxheap.size()<<endl;
    cout<<"greatest element is : "<<maxheap.top()<<endl;

    cout<<"poping element and arranging in increasing order"<<endl;
    int n=maxheap.size();
    for(int i=0; i<n; i++){
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }

    cout<<"dealing with minHeap "<<endl;
    priority_queue<int,vector<int>,greater<int>>minheap;
    if(minheap.empty()){
        cout<<"now min heap is empty "<<endl;
        cout<<"size of min heap is "<<minheap.size()<<endl;
    }

    minheap.push(23);
    minheap.push(49);
    minheap.push(22);
    minheap.push(3);
    minheap.push(2);
    cout<<"size after push : "<<minheap.size()<<endl;
    int m=minheap.size();
    for(int i=0; i<m; i++){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
}