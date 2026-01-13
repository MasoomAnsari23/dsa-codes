#include<iostream>
using namespace std;

int HCF(int a, int b){
    a = abs(a);
    b = abs(b);
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return HCF(a-b,b);
    return HCF(a,b-a);
}

int main(){
    int a,b;
    cout<<"Enter x and y "<<endl;
    cin>>a>>b;
    cout<<"HCF of a, b is "<<HCF(a, b)<<endl; 
}