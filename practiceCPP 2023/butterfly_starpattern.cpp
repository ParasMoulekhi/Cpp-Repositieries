#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j<=n-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
    //     for(int k=1;k<=n-i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
    //     for(int k=1;k<=i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    int i=1;
    while(i<=2*n){
        if(i<=n){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k=1;k<=2*(n-i);k++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else if(i>n){
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
            for(int k=1;k<=2*(i-n);k++){
                cout<<" ";
            }
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
        }
        cout<<endl;
        i++;
    }
   
    return 0;
}