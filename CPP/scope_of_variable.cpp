#include<iostream>
using namespace std;

int main(){
    int i=20;
    // not allowed int i=4;
    cout<<i<<endl;

    if(i==20){
        int i=50;
        cout<<i<<endl;
    }
    cout<<i<<endl;

    for(int j=1;j<11;j++){
        cout<<j<<" ";
    }
    return 0;
}