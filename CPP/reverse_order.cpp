#include<iostream>
using namespace std;

int main(){
    int number ;
    cout<<"Enter number: ";
    cin>>number;

    int ans=0;
    while(number != 0){
        int temp=number % 10;
        if(temp == 0){
            number /= 10;
            continue;
        }
        ans =ans*10 + temp;
        number /= 10;
    }
    cout<<"Reverse of number is: "<<ans<<endl;
    return 0;
}
    
