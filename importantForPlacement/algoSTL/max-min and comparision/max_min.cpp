#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v{12,20,30,23,24,2,12};

    cout<<"min and max of two element "<<endl;
    cout<<"max is : "<<max(10,20)<<endl;
    cout<<"min is : "<<min(10,20)<<endl;

    cout<<"min_element"<<endl;
    cout<<"min element of vector is : "<<*min_element(v.begin(),v.end())<<endl;

    cout<<"max_element"<<endl;
    cout<<"max element of vector is : "<<*max_element(v.begin(),v.end())<<endl;

    cout<<"minmax_element "<<endl;
    auto p=minmax_element(v.begin(),v.end());
    cout<<"min and max element are : "<<*p.first<<" "<<*p.second;
}