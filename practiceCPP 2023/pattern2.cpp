#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter n number:";
    // cin>>n;
    // int i=1;
    // int temp=1;oh
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<temp;
    //         temp++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    int n;
    cout<<"Enter n number:";
    cin>>n;
    int temp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<temp;
            temp++;
        }
        cout<<endl;
    }
    return 0;
}