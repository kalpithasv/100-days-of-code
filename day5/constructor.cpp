//constructor is a spll method of a class that is automatically called when an object of the class is created
/*class className{
public:
    className();//constructor
        //code to be executed when object is created
}; //object created  
*/
#include <iostream>
using namespace std;
class Car{
    string brand;
    int year;
    public:
        Car(string b, int y){
            brand=b;
            year=y;
        }
        void display(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Year: "<<year<<endl;
        }
};
int main(){
    Car car1("Toyota", 2020);
    car1.display();

    Car car2("Honda", 2021);
    car2.display();
    
    return 0;
}
//