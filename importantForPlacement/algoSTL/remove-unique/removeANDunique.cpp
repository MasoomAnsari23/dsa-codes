#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
 vector<int>a={1,6,9,1,2,2,3,3,2,4,5};
 for(int x:a){
    cout<<x<<" ";
 }
 cout<<endl;

 cout<<"reomve method"<<endl;
 auto it=remove(a.begin(),a.end(),2);//2 will be deleted/erased from vector
 a.erase(it,a.end());//delete all 2 no matte what the loaction
 for(int x:a){
    cout<<x<<" ";
 }
 cout<<endl;

 cout<<"using unique method"<<endl;
 //use to sort vector and deleter duplicate element
 sort(a.begin(),a.end());
 auto iti=unique(a.begin(),a.end());
 a.erase(iti,a.end());
 for(int x:a){
    cout<<x<<" ";
 }
 cout<<endl;

}