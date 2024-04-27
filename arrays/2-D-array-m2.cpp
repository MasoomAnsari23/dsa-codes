#include<iostream>
using namespace std;
 int main()
 {
    int *A[3];
    A[0]= new int[4];
    A[1]= new int[4];
    A[2]= new int[4];
  
  A[2][3]=15; // in secord row third column value is 15

  // A[3][4]={{1,2,3},{3,4,6},{3,6,9},{5,10,15}};   something is wrong here
 }