#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[100];
    cin>>name;
    char c1,c2;
    cin>>c1>>c2;
    int length=strlen(name);
    for(int i=0;i<length;i++){
        if(name[i] == c1){
            name[i]=c2;
        }
    }
    cout<<name;

    return 0;
}