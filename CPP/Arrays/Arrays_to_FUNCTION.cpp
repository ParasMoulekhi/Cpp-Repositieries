#include<bits/stdc++.h>
using namespace std;

void increament(int a,int b[],int n){
    a++;
    b[0]++;
}

int main(){
    int a=10;
    int b[10]={1,2,3};
    increament(a,b,10);
    cout<<"a:"<<a<<endl;        //varible ki value me koi change hone pr function usko main fucntion me reflex nhi krta.
    cout<<"b[0]:"<<b[0]<<endl;  //arrays me jo change aata hai wo function refelx krwa deta hai main fucntion mein.
    return 0;
}
    