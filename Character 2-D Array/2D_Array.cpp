#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;
    //taking input 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //Display output
    cout<<"Row wise "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //if my coloumns are fixed and rows vary
    cout<<"coloumn wise "<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}



