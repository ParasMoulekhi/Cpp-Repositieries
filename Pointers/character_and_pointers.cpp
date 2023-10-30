#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4};
    char c[]="Paras";
    cout<<a<<endl;
    cout<<c<<endl;

    char* b=&c[0];
    cout<<b<<endl; 


    char c1 = 'a';
    char* pc1= &c1;
    cout<<c1<<endl;
    cout<<pc1<<endl;
}