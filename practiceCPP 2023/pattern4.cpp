#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n number:";
    cin>>n;
    // int i=1;
    // while(i<=n){
    //     int value=i;
    //     int j=1;
    //     while(j<=i){
    //         cout<<value;
    //         value++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=2*i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}