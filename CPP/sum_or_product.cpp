#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    int choice ;
    cout<<"choice is: "<<endl;
    cin>>choice;

    int sum=0,product=1;
    if(choice == 1){
        for(int i=1;i<=n;i++){
            sum += i;
        }
    }else if(choice == 2){
        for(int i = 1 ; i<=n ; i++){
                product *= i;
        }
    }
    if(choice ==1){
        cout<<"Sum is: "<<sum;
    }else if(choice == 2){
        cout<<"Product is: "<<product;
    }else{
        cout<<"-1";
    }
    return 0;
}