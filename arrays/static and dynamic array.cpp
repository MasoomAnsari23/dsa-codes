//printing static and dynamic array
#include<iostream>
using namespace std;
int main(){
    int A[5]={2,4,6,8,3}; //static array
    int *p;
    p=new int[5]; // dynamic array
    p[0]=2;
    p[1]=6;
    p[2]=3;
    p[3]=2;
    p[4]=7;
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    cout<<"element of p"<<endl;
   for(int i=0;i<5;i++){
    cout<<p[i]<<endl;
   }
   return 0;
}