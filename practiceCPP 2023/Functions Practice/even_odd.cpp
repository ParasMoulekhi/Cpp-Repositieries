#include<iostream>
using namespace std;

void check_even_odd(int a){
    if(a%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    check_even_odd(n);

    return 0;
}