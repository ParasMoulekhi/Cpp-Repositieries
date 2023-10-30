#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer number:";
    int n,fact=1;
    cin>>n;
    if(n<0)
      cout<<"Erro!can't find factorial of negative number:";
    else if(n<=1)
      cout<<n<<"!="<<fact<<endl;
    else
      for(int i=n;i>=2;i--){
        fact=fact*i;
       
      }
      cout<<n<<"!="<<fact<<endl;

}