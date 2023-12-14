#include<iostream>
using namespace std;

int main(){
  int a,b,gcd;
  cout<<"Enter two numbers: ";
  cin>>a>>b;

  if(b>a){
    int temp=a;
    a=b;
    b=temp;
  }

  for(int i=1;i<=a;i++){
    if(a%i==0 && b%i==0){
      gcd=i;
    }
  }
  cout<<"GCD = "<<gcd;
  return 0;
}