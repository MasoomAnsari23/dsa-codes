#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
 vector<int>a={1,2,3,4,5};
 vector<int>b={2,3,4,5,1};

 cout<<"accumulated sum of vector is : ";
 cout<<accumulate(a.begin(),a.end(),0)<<endl;

 cout<<"dot product : ";
 cout<<inner_product(a.begin(),a.end(),b.begin(),0)<<endl;

 cout<<"partial sum : ";//gives sum 1=1; 1+2=3; 1+2+3=6; finally prints : 1  3  6  10  15
 vector<int>res(5);//here size must be same also use insted  res(a.size());
  partial_sum(a.begin(),a.end(),res.begin());
  for(int x:res){
    cout<<x<<" ";
  }
  cout<<endl;

  cout<<"adjacent_difference is : ";
  vector<int>Res(5);
  adjacent_difference(b.begin(),b.end(),Res.begin());
  for(int x:Res){
    cout<<x<<" ";
  }
  cout<<endl;
  return 0;
}