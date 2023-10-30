#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int ans;
    for(int i=1;i*i <=n ;i++){
        ans=i;
    }
    cout<<ans;
    return 0;
}