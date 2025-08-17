#include<iostream>
using namespace std;

void merge(int A[], int l, int mid, int h){
    int i=l,j=mid+1,k=l;
    int B[h+1];

    while(i<=mid && j<=h){
        if(A[i]<A[j])
         B[k++]=A[i++];
         else
          B[k++]=A[j++];
    }
    for(; i<=mid; i++)
    B[k++]=A[i];
    for(; j<=h; j++)
    B[k++]=A[j];

    for(int i=l; i<=h; i++)
    A[i]=B[i];
}
    void mergeSort(int A[],int l, int h ){
         if(l<h){
            int mid=(l+h)/2;
            mergeSort(A,l,mid);
            mergeSort(A,mid+1,h);
            merge(A,l,mid,h);
         }
    }


int main(){
    int A[]={2,4,6,8,12,14,3,5,7,9};
    int n = sizeof(A)/sizeof(A[0]);

   cout<<"array after merging ";
   mergeSort(A,0,n-1);

   for(int i=0; i<n; i++){
    cout<<A[i]<<" ";
   }
   return 0;
}