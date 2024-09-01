//fuxn calling itself in circular fashion

#include<iostream>
using namespace std;
void funB(int x);

void funA(int x){
    if(x>0){
        cout<<x<<endl;
        funB(x-1);
        cout<<x<<endl;
    }
}

void funB(int x){
    if(x>1){
        cout<<x<<endl;
        funA(x/2);
        cout<<x<<endl;
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    funA(n);
    return 0;
}