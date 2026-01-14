#include<iostream>
using namespace std;
bool ispower(int n){
    if(n<=0)return 0;
    return (n&(n-1))==0;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<ispower(n)<<endl;
}