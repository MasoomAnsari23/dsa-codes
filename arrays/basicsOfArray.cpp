#include<iostream>
using namespace std;
int main()
{
int A[5]; 
int i=0;            /*this all are ways to declare and initialise arrays*/
 A[0]=3;
 A[1]=6;
 A[2]=9;
 A[3]=12;
 A[4]=15;
 for(i=0; i<=4; i++)
 {
   cout<<A[i];
 }

// int B[4]={1,3,5,7,9}; this array size is less then no of element

int C[5]={1,3,5}; //here declaring array and initializing done
cout<<C[i]<<endl; //this will print all element
cout<<C[0]<<endl;  //this will print only first element

int D[4]={0};  //all element of arry will be initialize as 0
cout<<D[i]<<endl;

int E[]={1,3,6,8,4,5,20}; //here size or array is declared as per no of element 
cout<<E[i]<<endl;
return 0;
}