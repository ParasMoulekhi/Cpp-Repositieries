#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        int value=n-i+1;
        while(j<=n){
            cout<<value;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

/*
Result
4444
333
22
1 */