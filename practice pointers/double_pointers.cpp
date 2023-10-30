#include<iostream>
using namespace std;
int main(){
    int i = 19;
    int *p = &i;
    int **q = &p;
    int ***r = &q;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<***r<<endl;

    cout<<'\n'<<&i<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
    cout<<**r<<endl;

    cout<<'\n'<<q<<endl;
    cout<<&p<<endl;
    cout<<*r<<endl;

    cout<<'\n'<<&q<<endl;
    cout<<r<<endl;

}