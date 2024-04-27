#include<iostream>
using namespace std;
int  main()
{
    int A[5]={2,5,7,9,10};
    int *p, *q;
    p=new int[5];
    cout<< *p<<endl;
    q=new int[5];
    delete[]q;  //dealocation of pointer to avoid memory leak
    return 0;
}
