#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: "<<endl;
    cin>>n;

    int pattern='1';
    for(int i=1;i<=n;i++){
         int start=1;
        for(int j=1;j<=i;j++){
            cout<<start;
            start++;
        }
        cout<<endl;
    }

    return 0;
}