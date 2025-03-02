#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};
   
void display(struct Array arr){
  int i;
  cout<<"element are "<<endl;
  for(i=0;i<arr.length;i++){
    cout<<arr.A[i]<<endl;
  }
}

int linearSearch(struct Array arr,int key){
  int i;
  for(i=0;i<arr.length;i++){
    if(key==arr.A[i])
    return i;
  }
    return -1;
}

int main(){
    struct Array arr={{2,3,5,7,9},10,5};
    
    cout<<linearSearch(arr,4);
    display(arr);
}