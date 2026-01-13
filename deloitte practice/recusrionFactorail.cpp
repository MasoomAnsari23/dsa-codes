#include<iostream>
using namespace std;

int factorail(int n){
    //base condition
    if(n==0) return 1;
    if(n==1) return 1;
    return n*factorail(n-1);
}

int main(){
    cout<<"enter num "<<endl;
    int num;
    cin>>num;
    cout<<"factorail of " << num << " is "<< factorail(num);
}