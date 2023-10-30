#include<iostream>
using namespace std;

void circle(int n){
    cout<<"Circumference of circle is :"<<2*3.14*n<<endl;
    cout<<"Area of circle is :"<<3.14*n*n<<endl;
}

int main(){
    int r;
    cin>>r;
    circle(r);
    return 0;
}