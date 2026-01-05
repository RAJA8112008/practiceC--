#include<iostream>
using namespace std;
string ReverseWord(string &s){
    int n=s.length();
    int i=0,j=n-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}
int main(){
    string s;
  cout<<"Enter the String:"<<endl;
  cin>>s;
  cout<<ReverseWord(s)<<endl;
}