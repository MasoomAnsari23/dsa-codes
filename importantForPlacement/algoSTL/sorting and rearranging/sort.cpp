#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    cout<<"sort(first,last)"<<endl;
    vector<int>v={12,3,15,6,7,9};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"sort(first,last,greater<int>())"<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"partial_sort(first,mid,last)"<<endl;
    partial_sort(v.begin(),v.begin()+4,v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"nth_element"<<endl;
    nth_element(v.begin(),v.begin()+1,v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

   cout<<"reverse"<<endl;
   reverse(v.begin(),v.end());
   for(int x:v){
    cout<<x<<" ";
   }
   cout<<endl;

   cout<<"rotate"<<endl;
   rotate(v.begin(),v.begin()+3,v.end());
   for(int x:v){
    cout<<x<<" ";
   }
   cout<<endl;

   cout<<"next_permutation"<<endl;
   next_permutation(v.begin(),v.end());
   for(int x:v){
    cout<<x<<" ";
   }  
 
  vector<pair<int,string>>v1={{1,"masoom"},{2,"sajjad"},{3,"asif"},{4,"sahid"},{1,"ansari"}};
    cout<<"stable_sort(first,last)"<<endl;
    stable_sort(v1.begin(),v1.end());
   for(auto &y : v1) {
    cout << y.first << " " << y.second << endl;
   }
   cout<<endl;


}

// output
// sort(first,last)
// 3 6 7 9 12 15
// sort(first,last,greater<int>())
// 15 12 9 7 6 3
// partial_sort(first,mid,last)
// 3 6 7 9 15 12
// nth_element
// 3 6 7 9 15 12
// reverse
// 12 15 9 7 6 3
// rotate
// 7 6 3 12 15 9
// next_permutation
// 7 6 3 15 9 12 stable_sort(first,last)
// 1 ansari
// 1 masoom
// 2 sajjad
// 3 asif
// 4 sahid