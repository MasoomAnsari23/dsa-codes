#include<iostream>
using namespace std;

int valid(char *name){
  int i;
  for(i=0; name[i]!='\0';i++){
    if(!(name[i]>='A' && name[i]<='Z') && !(name[i]>='a' && name[i]<='z') && !(name[i]>=48 && name[i]<=57))
 return 0;  
}
  return 1;
}

int main(){
 char name[]="m@soom123";
 if(valid(name)){
    cout<<"valid string"<<endl;
 }
 else{
 cout<<"invalid string"<<endl;
}
}