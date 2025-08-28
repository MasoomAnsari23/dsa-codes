#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    cout<<"making heap : ";
    vector<int>v={3,1,4,5,7,9};
    make_heap(v.begin(),v.end());
    cout<<"top element of heap (front) : "<<v.front()<<endl;

    cout<<"push in heap "<<endl;
    v.push_back(23);
    v.push_back(49);
    push_heap(v.begin(),v.end());
    cout<<"top element after push : "<<v.front()<<endl;

   cout<<"pop in heap "<<endl;
   v.pop_back();
   pop_heap(v.begin(),v.end());
   cout<<"heap after pop : "<<v.front()<<endl;

   cout<<"sorting heap "<<endl;
   make_heap(v.begin(),v.end());
   sort_heap(v.begin(),v.end());
   for(int x:v){
    cout<<x<<" ";
   }
   cout<<endl;
   return 0;
}