//making an array by taking input from user
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"enter element of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"element entered in arrays are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    delete []arr;
}