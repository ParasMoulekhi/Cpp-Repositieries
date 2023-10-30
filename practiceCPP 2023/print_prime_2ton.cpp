#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = n; i >= 2; i--){
        if(i == 2){
            cout<<2<<endl;
            continue;
        }
        int flag = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout<<i<<endl;
        }
        else
            continue;
    }
    return 0;
}