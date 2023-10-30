#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        for(int k=1;k<2*i-1;k++){  /*mujhe double spaces print isiliye 2*i-1 kra  */
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

/*Result
1234554321
1234**4321
123****321
12******21
1********1  */