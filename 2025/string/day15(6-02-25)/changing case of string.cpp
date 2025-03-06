#include<iostream>
using namespace std;

int main(){
    char M[]="masoom";
    int i;
    for(i=0;M[i]!='\0';i++){
        M[i]=M[i]-32;//subtract 32 to conver lower to upper
        //M[i]=toupper(M[i])
    }
    cout<<M<<endl;

    char A[]="ANSARI";
    int j;
    for(j=0;A[j]!='\0';j++){
        A[j]=A[j]+32;//add 32 to conver upper to lower
    }
    cout<<A<<endl;

    //toggle:lower to upper and upper to lower
    char MA[]="aSLAmoALIkum";
    int k;
    for(k=0;MA[k]!='\0';k++){
        if(MA[k]>='A' && MA[k]<='Z')//also take A=65 and Z=90;
        MA[k]=MA[k]+32;

        else if(MA[k]>='a' && MA[k]<='z')//also tale a=97 and z=122;
        MA[k]=MA[k]-32;
    }
    cout<<MA<<endl;
    return 0;
}