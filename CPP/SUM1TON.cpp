#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a numnber :";
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
}