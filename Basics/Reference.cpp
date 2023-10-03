#include <iostream>
using namespace std;

int main(){

    string food = "Chole bhature";
    string &meal = food;

    cout << food<<'\n'<< meal<< '\n';
    cout<< &meal<< '\n';
    cout<< &food<< '\n';
}