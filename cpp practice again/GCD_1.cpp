#include<iostream>
using namespace std;
int main(){
  int a,b,gcd;
  cin>>a>>b;
  if(a>b){
    int temp=a;
    a=b;
    b=temp;
  }

  for(int i=1;i<=a;i++){
    if(b%i==0 && a%i==0){
      gcd=a;
    }
  }
  cout<<gcd;
}