#include<iostream>
using namespace std;

int main(){
    char A[]="How Are you my brother";
    int i,vcount=0,ccount=0;//vcount for vowel and ccount for consonent

    for(i=0;A[i]!='\0';i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            vcount++;
        }

        else if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z')){
            ccount++;
        }
    }
    cout<<"no of vowels are :"<<vcount<<endl;
    cout<<"no of consonents are :"<<ccount<<endl;
    return 0;
}