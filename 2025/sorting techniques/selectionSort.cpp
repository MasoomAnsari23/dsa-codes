#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selectionSort(int A[], int n){
    int i, j,k;

    for(i=1; i<=n-1; i++){
        for(j=k=i; j<n; j++){
            if(A[j]<A[k])
            k=j;
        }
        swap(&A[i] , &A[k]);
    }
}

int main(){
    int A[]={2,5,3,9,7,34,56,12,3,7};
    int n=sizeof(A)/sizeof(A[0]);
    selectionSort(A,n);

    cout<<"sorted array: ";
    
    for(int i=0; i<10; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
//output :: sorted array: 2 3 3 5 7 7 9 12 34 56