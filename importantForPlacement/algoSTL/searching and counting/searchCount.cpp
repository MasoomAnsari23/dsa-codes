#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v={2,2,2,2,3,3,3,4,5,6,7,8,9};

    cout<<"binary_search"<<endl;
    if(binary_search(v.begin(),v.end(),4)){
        cout<<"4 is present"<<endl;
    }
    cout<<endl;

    cout<<"lower_bound"<<endl;
    auto it=lower_bound(v.begin(),v.end(),9);
    cout<<"lower_bound: "<<*it<<endl;

    cout<<"upper_bound"<<endl;
    auto Tt=upper_bound(v.begin(),v.end(),4);
    cout<<"upper bound is "<<*Tt<<endl;

    cout<<"find"<<endl;
    auto mt=find(v.begin(),v.end(),2);
    if(mt!=v.end());
    cout<<"found at "<<(mt-v.begin())<<endl;;

    cout<<"count"<<endl;
    cout<<count(v.begin(),v.end(),3)<<endl;

}
