#include<iostream>
using namespace std;

int main(){
    int b;
    cout<<"Enter binary number: ";
    cin>>b;

    int ans =0;
    while(b!=0){
        int temp=b % 10;
        int pv = 1;
        int dv = pv* temp;
        pv *= 2;
        ans = ans + dv;
    }
    return 0;
}
        