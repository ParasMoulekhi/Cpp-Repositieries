#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch++;
        }

        cout<<endl;
    }
    return 0;
}
        