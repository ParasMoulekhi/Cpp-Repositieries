#include<iostream>
using namespace std;

int  sum(int a,int b){
        return a+b;
}


int main(){
    int a,b;
    cin>>a>>b;
    int ans=sum(a,b);
    cout<<ans<<endl;
    return 0;
}