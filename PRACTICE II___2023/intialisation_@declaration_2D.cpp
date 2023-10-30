#include<iostream>
using namespace std;

void printDisplay2Darray(int a[][6] , int m , int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[6][6] = {{1,2} , {3,4} , {5,6}};
    printDisplay2Darray(a,6,6);
    return 0;
}