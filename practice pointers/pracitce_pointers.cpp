#include<iostream>
using namespace std;

int increament(int ** c){
    *c=*c+1;
    cout<<*c<<endl;
}
int increament2(int ** c){
    **c=**c+1;
    cout<<**c<<endl;
}

int main(){
    int i = 10;
    int *p1 = &i;
    int **p2 = &p1;
    

    cout<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    cout<<p1<<endl;
    cout<<*p2<<endl;

    cout<<p2<<endl;
    cout<<&p1<<endl;

    cout<<"User defines functions se aaenge ab answer "<<endl;
    increament(&p1);
    increament2(&p1);
    
}