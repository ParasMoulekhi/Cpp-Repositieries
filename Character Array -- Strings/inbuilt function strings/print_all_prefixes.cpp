#include<iostream>
#include<cstring>
using namespace std;

void printAllPrefixes(char s[]){
    int length=strlen(s);
    // i represent end index of my prefix
    for(int i=0;i<length;i++){

    // j represent starting index of my prefix

        for(int j=0;j<=i;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
}
int main(){
    char s[100]="abcd";
    printAllPrefixes(s);

}