#include<iostream>
using namespace std;

void insert(int A[], int n){
    int temp=A[n];
    int i=n;

    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

int Delete(int A[], int n){
   int x,i,j;
   x=A[n];
   A[1]=A[n];
   i=1; j=2*i;

   while(j<=n-1){
    if(j+1 <= n-1 && A[j+1]>A[j])
    j=j+1;
 
    if(A[i]<A[j]){
        swap(A[i], A[j]);
        i=j;
        j=2*j;
    }
   else
     break;
 }
  A[n]=x;
}

int main(){
     int A[]={0,10,20,30,25,5,40,35};
    int i;
    for(i=2; i<=7; i++){
        insert(A,i);
    }

    cout<<"heap before deletion"<<endl;
    for(i=1; i<=7; i++){
        cout<<A[i]<<endl;
    }

    int deletedVal=Delete(A,3);
    cout<<"deleted root : "<<deletedVal<<endl;
    
    cout<<"heap after deletion"<<endl;
    for(i=1; i<=7; i++){
        cout<<A[i]<<endl;
    }

    return 0;
}