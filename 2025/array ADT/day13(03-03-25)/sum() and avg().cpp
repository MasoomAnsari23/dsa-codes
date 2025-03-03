#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int length;
    int size;
};


void display(struct Array arr){
    int i;
    cout<<"elements of arrays are "<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

int Sum(struct Array arr){
    int sum=0;
    int i;
    for(i=0;i<arr.length;i++){
        sum=sum+arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

int main(){
    struct Array arr={{2,3,5,3,6,8,3},10,7};
    
    cout<<"sum of elements in array is "<<Sum(arr)<<endl;

    cout<<"avg of elements in array is "<<Avg(arr)<<endl;

    display(arr);
}