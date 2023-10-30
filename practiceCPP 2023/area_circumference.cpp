#include<iostream>
using namespace std;

double area(int n){
    double ans=3.14*n*n;
    return ans;
}

double circum(int p){
    double ans=2*3.14*p;
    return ans;
}

int main(){
    int r;
    cin>>r;
    double area_circle=area(r);
    double circum_circle=circum(r);
    cout<<"Area of circle which radius "<<r<<" is"<<"\n"<<area_circle<<endl;
    cout<<"Circumference of circle which radius "<<r<<" is"<<"\n"<<circum(r);
    return 0;
}