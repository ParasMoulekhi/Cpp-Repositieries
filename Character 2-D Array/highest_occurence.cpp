/* Input : abccd
   Output : c
   here we find out most occuring numbere in string */

#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<strlen(s);i++){
        int temp=s[i] - 'a';   // index number find krne k liye mene 'a' minus kr diya
        freq[temp]++;
    }
    int max=-11;
    int index=0;
    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max=freq[i];
            index=i;
        }
    }
    char ans = index + 'a'; // waapis character bnane k liye mene index mein 'a' add kr diya

    cout<<"highest number of occuring character: "<<ans;

    return 0;
}