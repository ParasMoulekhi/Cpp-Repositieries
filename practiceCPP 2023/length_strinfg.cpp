#include<iostream>
using namespace std;

int legnth(char s[]){
    int count=0;
    for(int i=0;s[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char s[100];
    cin>>s;
    cout<<"Length is: "<<legnth(s);
    return 0;
}