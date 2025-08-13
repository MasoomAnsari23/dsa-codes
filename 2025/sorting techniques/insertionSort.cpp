#include<iostream>
using namespace std;

void insertionSort(int A[], int n){
    int i,j,x;

    for(i=1; i<n; i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main(){
    int A[]={3,5,6,1,7,23,2};
    int n=sizeof(A)/sizeof(A[0]);
    insertionSort(A,n);

    cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}

// output: sorted array: 1 2 3 5 6 7 23