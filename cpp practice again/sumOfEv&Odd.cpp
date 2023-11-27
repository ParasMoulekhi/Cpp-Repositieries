#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    int evenSum=0;
    int oddSum=0;
    while(n != 0){
        int temp = n %10;
        if(temp%2==0){
            evenSum+=temp;
        }else{
            oddSum+=temp;
        }
        n=n/10;
    }
    cout<<"Even digit sum is: "<<evenSum<<endl;
    cout<<"Odd digit sum is: "<<oddSum<<endl;
    return 0;
};