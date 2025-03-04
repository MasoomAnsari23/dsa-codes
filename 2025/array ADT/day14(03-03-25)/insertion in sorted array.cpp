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
    cout<<endl;
}


void InsertSort(struct Array *arr,int x){
    int i=arr->length-1; //last index is i;

    //if array is full,return
    if(arr->length==arr->size){
    cout<<"array is full insertion is not possible "<<endl;
    return;    
}

  
    //shift element to right to make space for insertion
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }

    //insert x at correct position
    arr->A[i+1]=x;
    arr->length++;
}

int main(){
    struct Array arr={{2,4,6,8,19,21,32},10,7};

    InsertSort(&arr,20);
    display(arr);
    return 0;
}