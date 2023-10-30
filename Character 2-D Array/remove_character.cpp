#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[100];
    cout<<"Enter stirng: ";
    cin>>s;
    
    cout<<"Enter character which i want to remove from above string: ";
    char x;
    cin>>x;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i] != x){
            cout<<s[i];
        }else{
            continue;
        }
    }
       



}
