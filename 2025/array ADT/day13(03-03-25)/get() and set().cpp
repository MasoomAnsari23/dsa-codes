#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
  int i;
  cout<<"elements of array are "<<endl;
  for(i=0;i<arr.length;i++){
    cout<<arr.A[i]<<endl;
  }
}

int Get(struct Array arr,int index){
  if(index>=0 && index<arr.length){//condition for valid index
    return arr.A[index];
  }
  return -1;
}

int Set(struct Array *arr,int index,int x){
   if(index>=0 && index<arr->length){//condition for valid inex
    arr->A[index]=x;
   }
   return -1;
}

int main(){
    struct Array arr={{10,3,45,2,12,9},6,10};

    cout<<"element at index is "<<Get(arr,3)<<endl;

    cout<<"setting elemnt in array "<<Set(&arr,9,99);

    display(arr);
}