#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>a={2,3,4,5},b(4);
    cout<<"elements of a :"<<endl;
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"elemets of b :"<<endl;
    for(int x:b){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"copying elemets of vector a to b "<<endl;
    copy(a.begin(),a.end(),b.begin());

    cout<<"elements of a after copying:"<<endl;
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"elemets of b after copying:"<<endl;
    for(int x:b){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"using fill method "<<endl;
    fill(b.begin(),b.end(),7);
    for(int x:b){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"using fill_n method "<<endl;
    fill_n(b.begin(),3,9);
    for(int x:b){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"using replace old with new"<<endl;
    replace(b.begin(),b.end(),7,99);
    for(int x:b){
        cout<<x<<" ";
    }
    cout<<endl;
}