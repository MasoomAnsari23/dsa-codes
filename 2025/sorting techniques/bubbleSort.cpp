#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int A[], int n){
   int i,j;
   int flag;
   for(i=0; i<n-1; i++){
       flag=0;//reset for each pass
    for(j=0; j<n-1-i; j++){
        if(A[j]>A[j+1]){
        swap(&A[j],&A[j+1]);
        flag=1;        
    }
   }
   //if no swap means already sorted
       if(flag==0)
       break;
 }
}

int main(){

    int A[]={2,5,3,6,21,16,12};
    int n=sizeof(A)/sizeof(A[0]);

    bubbleSort(A,n);

cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}

//output:sorted array: 2 3 5 6 12 16 21