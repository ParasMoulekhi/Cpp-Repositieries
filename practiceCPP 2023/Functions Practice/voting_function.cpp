#include<iostream>
using namespace std;

void elligibility_check(int n){
    if(n>=18){
        cout<<"Elligible to vote"<<endl;
    }else{
        cout<<"Not Elligible"<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    elligibility_check(num);
    return 0;
}