#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Spiral wise: ";
    int top=0,bottom=m-1,left=0,right=n-1;
    while(top<=bottom && left <= right){
        for(int i=left ; i<= right ; i++){
            cout<<b[top][i]<<" ";
        }
        top ++;
        for(int i = top;i<=bottom ; i++){
            cout<<b[i][right]<<" ";
        }
        right--;
        for(int i=right;i>=left;i--){
            cout<<b[bottom][i]<<" ";
        }
        bottom--;
        for(int i=bottom ; i>=top;i--){
            cout<<b[i][left]<<" ";
        }
        left++;
    }
}