#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number which i found square root: ";
    cin>>n;

    int ans;
    for(int i=1;i*i <= n ; i++){
        ans= i;
    }
    cout<<"Integral part of square root of "<<n<<" is: "<<ans;
    return 0;
}