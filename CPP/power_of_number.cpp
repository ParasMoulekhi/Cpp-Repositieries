#include<iostream>
using namespace std;

int main(){
   int x,n;
   cin>>x>>n;
   cout<<"x is a number: "<<x<<"\nn is a power: "<<n<<endl;

   if(x==0){
      cout<<x<<"^"<<n<<" is 1"<<endl;
   }else if(x>0){
      int value=1;
      while(n>0){
         value *= x;
         n--;
      }
      cout<<value<<endl;
   }
   return 0;
}