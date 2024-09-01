// a fuxn calling itself only once
#include<iostream>
using namespace std;
void fun(int x){
    if(x>0){
        cout<<x<<endl;
        fun(x-1);
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    fun(n);
}