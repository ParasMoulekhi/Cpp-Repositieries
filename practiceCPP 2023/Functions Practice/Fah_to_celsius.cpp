#include<iostream>
using namespace std;

int ftoc(int n){
    return (5.0/9)*(n-32);
}

int main(){
    int S,E,W;
    cin>>S>>E>>W;
    for(int i=S;i<=E;i+=W){
        cout<<i<<"\t"<<ftoc(i)<<endl;
    }
    return 0;
}