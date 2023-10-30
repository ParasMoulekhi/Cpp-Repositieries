/*Palindromic String ----> A pallindrome is a word or a string that reads the same backward and forward */
#include<bits/stdc++.h>
using namespace std;

void isPallindrome(char arr[]){
    int length = strlen(arr);
    int flag =0;
    for(int i=0;i<length;i++){
        if(arr[i] != arr[length - i -1]){
            flag = 1;
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
    char name[100];
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Is this pallindrome? :";
    isPallindrome(name);

    return 0;
} 