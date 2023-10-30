/* To copy first n character from one string to another */
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char input1[100]="abcd";
    char input2[100]="Hello";

    cout<<"Befor copying: ";

    cout<<"Input of input1 "<<input1<<endl;
    cout<<"Input of input2 "<<input2<<endl;

    strncpy(input1,input2,3);

    cout<<"After copying: ";

    cout<<"Output of input1 "<<input1<<endl;
    cout<<"Output of input2 "<<input2<<endl;

    return 0;
    
}