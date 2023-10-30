#include<iostream>
using namespace std;

int main(){
    char ch;
    ch=cin.get(); /*  if you hold some commands to count every character like tab , space , new line then we use cin.get()  */
    int count=0;
    while(ch!='$'){
        count++;
        ch=cin.get();
    }
    cout<<count;
    return 0;
}