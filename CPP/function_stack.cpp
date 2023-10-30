#include<iostream>
using namespace std;

void B(){
    cout<<14<<endl;
}

void A(int t){
    cout<<3<<endl;
    B();
    cout <<21<<endl;
}

int main(){
    int n=10;
    cout<<1<<endl;
    A(n);
    cout<<4<<endl;
    return 0;
}