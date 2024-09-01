//fuxn calling itself more then one time
#include<iostream>
using namespace std;
void fun(int x){
    if(x>0){
        fun(x-1);
        cout<<x<<endl;
        fun(x-1);
        fun(x-1);
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    fun(n);
}