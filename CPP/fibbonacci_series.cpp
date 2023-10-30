#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"No.of terms :";
    cin>>n;
    int a=0,b=1;
    while(a<n){
        cout<<a<<endl;
        int c=a+b;
        a=b;
        b=c;
    }
 
    return 0;
}