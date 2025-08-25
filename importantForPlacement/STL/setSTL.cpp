#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    if(s.empty()){
      cout<<"now set is empty"<<endl;
    }

    s.insert(23);
    s.insert(7);
    s.insert(56);
    s.insert(23);
    s.insert(49);
    cout<<"set after insertion"<<endl;
    cout<<"automatically sort it "<<endl;
    for(int x: s){
        cout<<x<<" ";
    }
    cout<<endl;
   s.erase(7);
   cout<<"size of set is reduced to : "<<s.size()<<endl;
   s.clear();
   cout<<"size after clearing set : "<<s.size()<<endl;
}