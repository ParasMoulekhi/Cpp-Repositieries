#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(i+j==5 || j-i==3 || i==4){
                cout<<'*';
            }else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
}