#include<iostream>
using namespace std;

bool comparing(string str1,string str2){
if(str1.length()!=str2.length()){
    cout<<"not equal "<<endl;
    return false;
}

   for(size_t i=0 ; i<str1.length();i++){ //size_t is used because it return unsigned value
    if(str1[i]!=str2[i]){
      cout<<"not equal"<<endl;
      return false;
    }
   }

   cout<<"equal"<<endl;
   return true;
}

int main(){
   string str1;
   string str2;
    cout<<"enter string 1"<<endl;
    cin>>str1;

    cout<<"enter string 2"<<endl;
    cin>>str2;

    comparing(str1,str2);
    return 0;
}