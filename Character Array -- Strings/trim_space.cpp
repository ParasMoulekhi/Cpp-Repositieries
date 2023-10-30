#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    cin.getline(s,100);
    int length= strlen(s);
    int index=0;
    for(int i=0;i<length;i++){
        if(s[i] != ' '){
            s[index]=s[i];
            index++;
        }
    }
    s[index]='\0';
    cout<<s<<endl;

}