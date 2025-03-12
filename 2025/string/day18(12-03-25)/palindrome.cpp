#include<iostream>
using namespace std;

bool isPalindrome(const string &str){
    int i=0,j=str.length()-1;

    while(i<j){
        if(str[i]!=str[j]){
            return false;//mismatach found not a palindrome
        }
        i++;
        j--;
    }
    return true;//no mismatch found , a palindrome
}
int main(){
    string str;
    cout<<"enter a string: "<<endl;
    cin>>str;

    if(isPalindrome(str))
      cout<<" palindrome \n";
    else
    cout<<" not a palindrome \n";
    return 0;  
}