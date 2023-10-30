#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans=0;
    int pv=1;
    while(n != 0){
        int temp = n % 2;
        ans = ans + pv * temp;
        pv *=10;
        n /= 2;
        
    }
        cout<<ans;
    

   


}


        
