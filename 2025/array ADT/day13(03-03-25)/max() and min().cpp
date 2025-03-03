#include<iostream>
using namespace std;

struct Array{
  int A[10];
  int lenght;
  int size;
};

void display(struct Array arr){
    int i;
    cout<<"elements of array are "<<endl;
    for(i=0;i<arr.lenght;i++){
        cout<<arr.A[i]<<endl;
    }
}

int Max(struct Array arr){
  int max=arr.A[0];
  int i;
  for(i=1;i<arr.lenght;i++){
    if(arr.A[i]>max)
    max=arr.A[i];
  }
  return max;
}

int Min(struct Array arr){
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.lenght;i++){
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;
}

int main(){
    struct Array arr={{2,5,3,112,45,12,34,1,4,8},10,10};
      
    cout<<"maximum of array is "<<Max(arr)<<endl;

    cout<<"minimum of array is "<<Min(arr)<<endl;

    display(arr);
}