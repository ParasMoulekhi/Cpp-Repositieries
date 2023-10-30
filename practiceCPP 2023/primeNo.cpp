#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n number :";
    cin>>n;
    bool divided=false;
    for(int i=2 ; i<n ; i++){
        if( n % i == 0){
            divided = true;
            break;
        }
    }
    if(divided){
        cout<<"No Prime";
    }
    else {
        cout<<"Prime";
    }
    return 0;
}