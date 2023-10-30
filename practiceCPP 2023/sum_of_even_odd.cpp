#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n number: ";
    cin>>n;
 
    int evenSum=0,oddSum=0;
    while(n != 0){
        int temp=n%10;
        if(temp % 2 == 0){
            evenSum += temp;
        }else{
            oddSum +=temp;
        }
        n /= 10;
    }
    cout<<"EvenSum is: "<<evenSum<<endl;
    cout<<"OddSum is: "<<oddSum<<endl;

    return 0;
}