#include <iostream>
using namespace std;

 // Named structure

    struct car {
        string brand;
        string model;
        int year;

    };

int main(){
    cout << "Structure in C++"<< "\n";

    struct {
        int myNum;
        string myString;
    } myStructure;

    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2000;

    cout<< myCar1.brand<< '\n';
   

    return 0;
}