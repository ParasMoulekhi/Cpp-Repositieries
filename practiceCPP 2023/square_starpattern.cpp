#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
        i++;
    }
    return 0;
}