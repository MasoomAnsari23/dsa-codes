#include<iostream>
using namespace std;
int main()
{
    int **A;        //method 3 to create array, everything is on heap
    A=new int*[3];   // double ** is used
    A[0]=new int[4];  //row=3 column=4;
    A[1]=new int[4];
    A[2]=new int[4];

    int i,j;
    for(i=0; i<3; i++){   // accessing array using nested for loop two times
        for(j=0; j<4; j++){
            cout<<A[i][j]<<endl;
        }
    }
    return 0;
}