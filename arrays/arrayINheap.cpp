#include<iostream>
using namespace std;
 int main()
 {
    int i=0;
    int A[5];
    int *p;
    p=new int[5];
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    for(i=0; i<=4; i++)
    {
       cout<<p[i]<<endl;
    }
 }