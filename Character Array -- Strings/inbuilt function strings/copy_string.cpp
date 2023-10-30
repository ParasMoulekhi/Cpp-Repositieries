#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100]="abcd";
    char b[100]="def";

    cout<<"Before copying: "<<endl;

    cout<<"Input of a is: "<<a<<endl;
    cout<<"Input of b is: "<<b<<endl;

    strcpy(a,b);  //strcpy(destination_string , source_string)

    cout<<"After copying: "<<endl;

    cout<<"Output of a is: "<<a<<endl;
    cout<<"Output of b is: "<<b<<endl;
    return 0;


} 
