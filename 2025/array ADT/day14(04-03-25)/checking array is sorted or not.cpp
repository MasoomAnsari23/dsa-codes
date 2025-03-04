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

int isSort(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])
        return 0; //elements are not sorted
    }
    return 1;//elements are sorted
}

int main(){
    struct Array arr={{2,4,12,13,15,23,25},10,7};

    cout<<isSort(arr)<<endl;

    display(arr);
    return 0;
}