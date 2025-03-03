#include<iostream>
using namespace std;

//binary search must be sorted
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

int RecursiveBinarySearch(int arr[], int l, int h, int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==arr[mid])
        return mid;
    else if(key<arr[mid])
    return RecursiveBinarySearch(arr,l,mid-1,key);
    else
    return RecursiveBinarySearch(arr,mid+1,h,key);
    }
    return -1;
}

int main(){
    struct Array arr={{3,4,6,8,9},10,5};

   cout<<"key is at index "<<RecursiveBinarySearch(arr.A,0,arr.length-1,9)<<endl;;

    display(arr);
}