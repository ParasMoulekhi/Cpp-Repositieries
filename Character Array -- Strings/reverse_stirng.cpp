#include<bits/stdc++.h>
using namespace std;

void reverseString(char input[]){
    int leng=strlen(input);
    int i=0,j=leng-1;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }

}
int main(){
    char input[100];
    cin.getline(input,100);
    reverseString(input);
    cout<<input;
 
}

