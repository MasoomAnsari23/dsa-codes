#include<iostream>
using namespace std;

struct Array{
 int A[10];
 int length;
 int size;
};

void display(struct Array arr){
    int i;
    cout<<"elements are "<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

int binarySerach(struct Array arr, int key){
    int l=0,mid,h;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
        return mid;
        else if(key<arr.A[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}

int main(){
    struct Array arr={{3,5,7,9,2},10,5};

   cout<<"binarysearch at index "<<binarySerach(arr,2)<<endl;
    display(arr);
}