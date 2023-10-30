#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a n number:";
    cin>>n;
    int value=1;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}