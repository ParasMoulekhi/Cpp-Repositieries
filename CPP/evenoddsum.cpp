#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int evensum = 0;
    int oddsum = 0;
    while(n != 0){
        int temp = n % 10;
        if(temp % 2 == 0){
            evensum += temp;
        }else{
            oddsum += temp;
        }
        n = n/10;
    }
    cout<<"Even Sum: "<<evensum<<endl;
    cout<<"Odd sum: "<<oddsum<<endl;
    return 0;
}
