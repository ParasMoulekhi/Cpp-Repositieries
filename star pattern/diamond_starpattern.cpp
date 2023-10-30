#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=1;i<n;i++){
    //     for(int k=1;k<=n-i;k++){
    //         cout<<" ";
    //     }
    //     for(int m=1;m<=i;m++){
    //         cout<<"*";
    //     }
    //     for(int j=1;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int k=1;k<i;k++){
    //         cout<<" ";
    //     }
    //     for(int m=i;m<=n;m++){
    //         cout<<"*";
    //     }
    //     for(int j=i;j<n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


 /*Alternate method to solve this
 we use */
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
             cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }

        for(int j=2*i-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
 }




