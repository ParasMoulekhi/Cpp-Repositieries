#include<iostream>
using namespace std;

int length(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[100];
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Length of string is: "<<length(name);
    return 0;
}