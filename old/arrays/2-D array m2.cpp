//creating 2-D arrays half on stack and half on heap
#include<iostream>
using namespace std;
int main(){
    // int P[3][5]={{3,4,5,7,3},{2,6,9,5,6},{7,5,3,1,8}};
    int *P[3];
    P[0]=new int[5];
    P[1]=new int[5];
    P[2]=new int[5];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout<<P[i][j]<<endl;
        
            // cout<<"\n"<<endl;
        }
    }
    }
