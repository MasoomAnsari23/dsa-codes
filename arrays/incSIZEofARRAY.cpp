#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int *p, *q;
    p=new int[5];
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    cout<<p[i]<<endl;
    
    q=new int[10];
    for(i=0; i<=4; i++)
    {
        q[i]=p[i];
    }

    delete []p;
     p=NULL;
     cout<<q[i]<<endl;
     return 0;
}