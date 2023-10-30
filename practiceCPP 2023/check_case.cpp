#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch >=97 && ch <= 97+25){
        cout<<"-1";
    }
    else if(ch>=65 && ch<=65+25 ){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}