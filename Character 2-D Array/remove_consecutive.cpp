#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[100];
    cin>>s;
    int len=strlen(s);
    cout<<s[0];
    char lastChar=s[0];
    for(int i=1;i<len;i++){
        if(s[i] != lastChar){
            lastChar=s[i];
        }else{
            continue;
        }
        cout<<lastChar;
    }
    return 0;
}