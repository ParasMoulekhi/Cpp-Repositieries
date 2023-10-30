#include<iostream>
using namespace std;
int main(){
    cout<<"check kro mere ldke:";
    int n;
    cin>>n;
    int flag = 2;
    for(int i=2;i<n;i++){
        if(n % i ==0){
            flag = 1;
        }  
    }
    if(flag==2){
        cout<<"number is prime "<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }
    char c;
    cin>>c;
    return 0;

}