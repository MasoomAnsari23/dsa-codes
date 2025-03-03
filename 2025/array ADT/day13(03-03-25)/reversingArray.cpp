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

void reverse(struct Array *arr){
    int *B;
    int i,j;
    B=new int[arr->length];

    //copying elements in reverse order
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }

    //copying back to original array
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
    delete[] B;//free alocation memory
}

int main(){
    struct Array arr={{2,3,5,7,9,23,12,34,67,3},10,10};
    display(arr);
    reverse(&arr);
    cout<<"elements after reverse"<<endl;
    display(arr);
    return 0;
}