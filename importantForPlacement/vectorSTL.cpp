#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"vector v1"<<endl;
    vector<int>v1;
    if(v1.empty()){
        cout<<"vertor is empty"<<endl;
    }

    cout<<"vector v2"<<endl;
    vector<int>v2(5);
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    for(int x:v2)cout<<x<<" ";
    v2.resize(10,7);
    v2.clear();
    if(v2.empty()){
        cout<<"v2 became empty"<<endl;
    }
    cout<<endl;

cout<<"vector v3"<<endl;
    vector<int>v3(5,5);
    v3.reserve(3);
    v3.push_back(12);
    v3.push_back(125);
    v3.pop_back();
    v3.insert(v3.begin()+1,23);
    v3.erase(v3.begin());

    for(int x:v3)cout<<x<<" ";
    cout<<endl;

    cout<<"vector v4"<<endl;
    vector<int>v4={2,3,4,5,6};
    cout<<v4.size()<<endl;
    cout<<v4.capacity()<<endl;
    cout<<v4.at(4)<<endl;
    cout<<v4.front()<<endl;
    cout<<v4.back()<<endl;

    //iterators
    cout<<"using iterators"<<endl;
    for(int i=0; i<v4.size();i++){
        cout<<v4[i]<<" ";
        cout<<endl;
    }

    for(auto it=v4.begin(); it!=v4.end(); it++){
        cout<<*it<<" ";
        cout<<endl;
    }
}