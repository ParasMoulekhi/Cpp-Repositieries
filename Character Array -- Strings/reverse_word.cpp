/* sameple input = abc de f gh 
   sample output = gh f de abc */
#include<bits/stdc++.h>
using namespace std;

void reverse_string(char s[],int start,int end){
    while(start<end){
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}

void reverse_words(char s[]){
    int length = strlen(s);

    reverse_string(s,0,length-1);

    int i=0;
    while(i<length){
        int j=i;
        while(s[j] != ' '  && j<length){
            j++;
        }
        reverse_string(s,i,j-1);
        i=j+1;
    }
}
int main(){
    char s[100];
    cin.getline(s,100);
    reverse_words(s);
    cout<<s<<endl;
}