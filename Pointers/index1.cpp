#include<iostream>
using namespace std;

int main(){
    int i =10;
    int* p = &i;
    cout<<p<<endl;
    p = p + 1;
    cout<<p<<endl;
    
    double d = 34.341;
    double* df = &d;

    cout<<df<<endl;
    df++;
    cout<<df<<endl;

   


}