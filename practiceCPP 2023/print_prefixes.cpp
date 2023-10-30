#include<iostream>
#include<cstring>
using namespace std;

void print_Prefix(char s[]){
    int length=strlen(s);
    for(int i=0;i<length;i++){
        for(int j=0;j<=i;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
}

int main(){
    char s[100];
    cin>>s;
    print_Prefix(s);

}