#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Rows and coloumns: ";
    cin>>m>>n;
    cout<<"Elements are: ";
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Wave print is: ";
    for(int j=0;j<n;j++){
        if(j % 2 == 0){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }else{
            for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }

    return 0;
}