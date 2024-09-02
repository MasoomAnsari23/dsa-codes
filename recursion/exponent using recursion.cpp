//exponent function
#include<iostream>
using namespace std;
int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else return pow(m,n-1)*m;
}
int main(){
    int r,x,y;
    cout<<"enter x and y"<<endl;
    cin>>x>>y;

    if(y<0){
    cout<<"please enter a positive power"<<endl;
    }
    else{
        r=pow(x,y-1)*x;
        cout<<r<<endl;
    }
    return 0;
}