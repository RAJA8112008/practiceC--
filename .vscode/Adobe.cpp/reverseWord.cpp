#include<iostream>
#include<vector>
using namespace std;
string ReverseWord(string &s){
    //to store the words from word
    int n=s.length();
   string word="";
   //to store the 
  vector<string>words;
   for(int i=0;i<n-1;i++){
    //remove the white space
    if(s[i]==' '||s[i]=='.'){
        if(!word.empty()){
             words.push_back(word);
             word="";
        }
    }else{
        word+=s[i];
    }
   }
   if(!word.empty()){
             words.push_back(word);
             word="";
        }
        //reverse process
        
}
int main(){
    string s;
  cout<<"Enter the String:"<<endl;
  cin>>s;
  cout<<ReverseWord(s)<<endl;
}