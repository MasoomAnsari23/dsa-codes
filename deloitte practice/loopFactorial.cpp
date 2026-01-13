#include<iostream>
using namespace std;

int factorial(int n){
    int res=1;
    for(int i=1; i<=n; i++){
        res=res*i;
    }
    return res;
}

int main(){
    int num;
    cout<<"enter num"<<endl;
    cin>>num;
    cout<<"factrail of "<<num<<" is : "<<factorial(num);
    return 0;
}