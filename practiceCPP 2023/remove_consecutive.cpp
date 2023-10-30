#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    cin>>s;
    int len=strlen(s);
    cout<<s[0];
    char lastchar=s[0];
    for(int i=1;i<len;i++){
        if(s[i] != lastchar){
            lastchar=s[i];
        }else{
            continue;
        }
        cout<<lastchar;
    }
}