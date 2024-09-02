// // finding factorial of number using recursion
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
    return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int x,r;
    cout<<"enter x"<<endl;
    cin>>x;
    if(x<0){
        cout<<"please enter a positive number"<<endl; 
    }
    else{
    r=fact(x);
    cout<<r<<endl;
    return 0;
}
}

// practice

#include<iostream>
using namespace std;
int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
int main(){
    int r,n;
    cout<<"enter n"<<endl;
    cin>>n;
    if(n<0){
        cout<<"please enter a positive number"<<endl;
    }
    else{
        r=fact(n);
        cout<<r<<endl;
    }
    return 0;
}