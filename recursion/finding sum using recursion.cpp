#include<iostream>
using namespace std;
int sum(int x){
    if(x==0){
        return 0;
    }
    else{
        return sum(x-1)+x;
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    if(n<0){
        cout<<"please enter a positive number"<<endl;
    }
    else{
        int result=sum(n-1)+n;
        cout<<result<<endl;
    }
    return 0;
}
