#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cout<<"Enter n number:";
    cin>>n;
    int evensum=0,oddsum=0;
    while(n!=0){
        int temp=n%10;
        if(temp%2==0){
            evensum += temp;
        }else{
            oddsum += temp;
        }
        n = n/10;
    }
    cout<<"EvenSum: "<<evensum<<endl;
    cout<<"OddSum: "<<oddsum<<endl;
    return 0;



}