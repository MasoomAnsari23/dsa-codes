//counting no of words
#include<iostream>
using namespace std;

int main(){
    int i, word=0;
    char A[]="How are you my  brother   ";

    for(i=0; A[i]!='\0';i++){
        if(A[i]!=' ' && (A[i+1]==' ' || A[i+1]=='\0'))
        word++;
    }
    cout<<word;
}