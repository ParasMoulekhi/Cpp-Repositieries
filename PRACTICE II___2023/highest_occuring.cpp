#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[100];
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<strlen(s);i++){
        int temp = s[i] - 'a';
        freq[temp]++;
    }

    int max = -1;
    int index = 0;

    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max = freq[i];
            index = i;
        }
    }
    char ans = index + 'a';
    cout<<"highest occuring: "<<ans;

    return 0;
}