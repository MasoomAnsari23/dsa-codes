#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

//partiting function
int partition(int A[],int l, int h){
  int pivot=A[l];
  int i=l;
  int j=h;

  do{
    do{i++; }while(A[i]<=pivot);
    do{j--; }while(A[j]>pivot);

    if(i<j)swap(&A[i], &A[j]);
  }
  while(i<j);
  swap(&A[l], &A[j]);
  return j;
}

void quickSort(int A[], int l,int h){
  int j;
  if(l<h){
    j=partition(A,l,h);
    quickSort(A,l,j);
    quickSort(A,j+1,h);
  }
}

int main(){
    int A[]={2,4,6,3,5,8,36,0,23,4, INT16_MAX};
    quickSort(A,0,10);

cout<<"After sorting ";
    for(int i=0; i<10; i++){
        cout<<A[i]<<" ";
    }
    return 0;
//output::After sorting 0 2 3 4 4 5 6 8 23 36