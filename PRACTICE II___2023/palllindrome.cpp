#include<bits/stdc++.h>
using namespace std;

void chkpallindrome(char a[]){
    int leng=strlen(a);
    int flag=1;
    for(int i=0;i<leng;i++){
        if(a[i]==a[leng-i-1]){
            flag=0;
            continue;
        }else{
            break;
        }
    }
    if(flag==0){
        cout<<"True";
    }else{
        cout<<"False";
    }
}
int main(){
    char a[100];
    cin>>a;
    chkpallindrome(a);
    
}