#include<iostream>
using namespace std;

class vehicle{
    private:
        int price;
    public:
        vehicle(int p){
            price=p;
        }
        int getprice(){
            cout<< price;   
        }
};


int main(){
    vehicle car(100);
    car.getprice();

}