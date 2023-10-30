#include<iostream>
#include<string>
using namespace std;

class books{
    private:
        string name;
    public:
        void setdata(string n){
            name=n;
        }
        string getdata(){
            return name;
        }
};
int main(){
    books book1;
    book1.setdata("Geeta");
    cout<<book1.getdata()<<endl;

}