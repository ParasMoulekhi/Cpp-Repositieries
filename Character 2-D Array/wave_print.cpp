#include<iostream>
using namespace std;


int main(){
    int b[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Wave print is: ";
    for(int j=0;j<4;j++){
            if( j % 2 == 0){
                for(int i=0;i<3;i++){
                    cout<<b[i][j]<<" ";
                }
            }else{
                for(int i=2;i>=0;i--){
                    cout<<b[i][j]<<" ";
                }
            }
        }
}
