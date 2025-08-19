#include<iostream>
#include<deque>
using namespace std;

int main(){
deque<int>D1;
D1.push_front(2);
D1.push_back(23);
cout<<"after push front nd back "<<endl;
for(int x: D1)cout<<x<<" ";
cout<<"endl";

D1.pop_back();
D1.pop_front();
if(D1.empty()){
    cout<<"deque is empty "<<endl;
}

deque<int>D2={2,3,4,9};
cout<<"size of deque D2 "<<D2.size()<<"endl";
cout<<"front element of deque "<<D2.front()<<endl;
cout<<"back element of deque "<<D2.back()<<endl;
cout<<" 3rd elemt of queue is "<<D2[2]<<endl;

D2.erase(D2.begin(),D2.begin()+1);//erasing in range
cout<<"element after erasing"<<endl;
for(auto it=D2.begin(); it!=D2.end(); it++){
    cout<<*it<<" ";
}
cout<<endl;
}

