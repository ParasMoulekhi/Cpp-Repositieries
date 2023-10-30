#include<iostream>
using namespace std;
int main(){
    int a=10;
    char c='a';
    c=c+a;
    a=c;
    cout<<a<<endl;

    c='0';
    a=c;
    cout<<a;
}