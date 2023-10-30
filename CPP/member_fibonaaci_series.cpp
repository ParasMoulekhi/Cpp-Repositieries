#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n number: ";
    cin>>n;
    
    int t;
    cout<<"Enter number which i want to find out: ";
    cin>>t;

    int flag=0;
    int a=0,b=1,c;
    while(a<n){
        if(a==t){
            flag=1;
            break;
        }else if(a<t){
            c=a+b;
            a=b;
            b=c;
        }
        else{
            break;
        }
    }
    if(flag==1){
        cout<<"Present";
    }else{
        cout<<"absent";
    }

}

/*jis element ko fibo naaci series me find out krna hai 
usse hmesa a==e , a<e hona chaiye
agr wo series me a>e ho rha h*/
