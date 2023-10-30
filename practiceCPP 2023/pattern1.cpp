#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"enter n number:";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    int n;
    cout<<"enter n number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}