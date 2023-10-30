#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;

    return 0;
}
