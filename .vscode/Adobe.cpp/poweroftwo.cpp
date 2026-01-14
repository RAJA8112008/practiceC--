#include<iostream>
using namespace std;
bool ispower(int n){
    if(n<=0)return false;
    return n&(n-1);
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<ispower(n)<<endl;
}