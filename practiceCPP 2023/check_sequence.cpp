#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool decreasing = true;
    bool increasing = false;
    bool flag= true;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            flag =false;
            break;
        }else if(decreasing && arr[i]>arr[i+1]){
            continue;
        }else{

            increasing=true;
            decreasing=false;
        }
        if(increasing && arr[i]>arr[i+1]){ // agr tera dec to inc chl rha h aur agr inc k baad ek dm se dec aa gya to uske liye hai
            flag=false;
        }else if(decreasing && arr[i]<arr[i+1]){ // agr tera inc to dec chl rha hai agr dec k baad ek dmm se inc utha to usk liye hai
            flag = false;
        }
    }
    if(flag){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
















