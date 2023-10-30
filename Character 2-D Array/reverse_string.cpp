#include<bits/stdc++.h>

using namespace std;

void reverse(char s[],int start,int end){
    while(start<end){
        char temp =s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}

void reverse_word(char s[]){
    int len=strlen(s);
    int i=0;
    while(i<len){
        int j=i;
        while(s[j] != ' ' && j<len ){
            j++;
        }
        reverse(s,i,j-1);
        i=j+1;
    }    
}
int main(){
    char s[100];
    cin.getline(s,100);
    reverse_word(s);
    cout<<s;
    


}