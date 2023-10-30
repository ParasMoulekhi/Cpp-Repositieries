#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:";
    int n,fact=1;
    cin>>n;
    if(n<0)
    cout<<"error!";
    else if(n<=1)
    cout<<n<<"!="<<fact<<endl;
    else{
      for(int i=n;i>=2;i--){
        fact=fact*i;
      }
      cout<<n<<"!="<<fact<<endl;
    }
    // for(int i=1;i<=n;i++){
    //     fact=fact*i;
    // }
    // cout<<n<<"!="<<fact<<endl;
}