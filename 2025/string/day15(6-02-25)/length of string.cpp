#include<iostream>
using namespace std;

int main(){

    //method 1 to declare anf initalize string
    char x[5]={'a','c','d','r','\0'};
    cout<<x<<endl;

   //method 2
   char y[]={'a','c','d','r','w','\0'};
   cout<<y<<endl;

   //method 3(best method)
   char Q[]="hellow";
   cout<<Q<<endl;

   //method 4:pointer
   const char *M="masoom";
   cout<<M<<endl;
   //length of string
   int i;
   for(i=0;M[i]!='\0';i++){
    //nothing
   }
   cout<<"length of string "<<i<<endl;

    return 0;
}