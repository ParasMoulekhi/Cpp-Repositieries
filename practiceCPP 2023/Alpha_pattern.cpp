#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char c='A'+i-1;
        while(j<=i){
            cout<<c;
            j++;
    
        }
        cout<<endl; 
        i++;
    }
    return 0;
}   

/*Result 
A
BB
CCC
DDDD*/