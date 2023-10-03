#include <iostream>
using namespace std;


class Car { //class of car
        private:
        string brand;
        string model;
        int year;
        public:
        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
            cout<< "Values assigned\n";
        }
        //getter
        void get(){
            cout<< brand<<'\n';
            
        }

        //setter
        void setBrand(string s){
            brand = s;
        }

        void honk(){
            cout<< "Honking\n";
        }
    };

class Phone {
    public:
    Phone() { // Constructor
        cout<< "Constructor here!\n";
    }
    private:
        int modelNo;
        int year;

};

int main(){
    // Phone Vivo;
    // Vivo.modelNo = 23; cant assign 
    // cout<< Vivo.modelNo; cant read.

    Car Ford("Ford", "X5", 1999);
    Ford.get();
    Ford.setBrand("Fiat");
    Ford.get();
    // Ford.brand; error
    // cout<< Ford.brand<<'\n';
    // cout<< Ford.model<<'\n';
    // cout<< Ford.year<<'\n';

    return 0;
}