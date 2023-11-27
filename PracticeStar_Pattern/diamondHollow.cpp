#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-1;j++){
        if(i+j==5 || j-i==3){
            cout<<'*';
        }else{
            cout<<' ';
        }
    }
    cout<<endl;
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-1;j++){
        if(i-j==0 || i+j==8){
            cout<<'*';
        }else{
            cout<<' ';
        }
    }
    cout<<endl;
  }
}

