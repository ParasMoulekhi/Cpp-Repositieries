#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        int value=i;
        while(j<=n){
            cout<<value;
            j++;
            
        } 
        cout<<endl;
        i++;
    }
    return 0;
}

/*Result 
1111
222
33
4  */