#include<iostream>
using namespace std;

void fun1(int x){
    if(x>0){
    cout<<x<<endl;
        fun1(x-1);
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    fun1(n);
    return 0;
}