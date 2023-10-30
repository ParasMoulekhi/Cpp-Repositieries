#include<iostream>
using namespace std;

int main(){
    //Take array input from the user
    int n;
    cin>>n;
    
    //give input 
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    //Print array
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }

    return 0;
}