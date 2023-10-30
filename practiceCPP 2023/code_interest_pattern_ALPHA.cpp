#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n;
    while(i>=1){
        char c=64+i;
        int j=i;
        while(j<=n){
            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}