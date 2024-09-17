//size of array can't be changed directly we need to use a new pointer to change size 
#include<iostream>
using namespace std;
int main(){
   int *p=new int[5];
   int *q=new int[10];
 p[0]=4;
 p[1]=14;
 p[2]=42;
 p[3]=23;
 p[4]=49;
 cout<<"element in p"<<endl;
 for(int i=0; i<5; i++){
   cout<<p[i]<<endl;
 }

 for(int i=0; i<5; i++){
   q[i]=p[i];
 }
 
 cout<<"element in q"<<endl;
 for(int i=0; i<10; i++){
   cout<<q[i]<<endl;
 }
 q[5]=45;
 q[6]=34;
 q[7]=56;
 q[8]=49;
 q[9]=23;
cout<<"element after addinf rest element in q"<<endl;
for(int i=0; i<10; i++){
   cout<<q[i]<<endl;
 }
 delete p;
 p=q;
 q=NULL;
cout<<"new p"<<endl;
 for(int i=0; i<10; i++){
   cout<<p[i]<<endl;
 }
}