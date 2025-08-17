#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> arr={2,3,4,5,6};

    cout<<"size of array is : "<<arr.size()<<endl;
    
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //range based for loop
    for(int x : arr)cout<<x<<" ";
    cout<<endl; 

    //iterator
    for(auto it=arr.begin(); it!=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<arr.at(3)<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    return 0;
}