#include <iostream>
using namespace std;

int main(){
    cout<< "Pointers in CPP.\n";

    string food = "Chole";
    string* ptr = &food;
    

    cout<< food<< '\n';
    cout<< &food << '\n';
    cout << ptr << '\n';
    
    // dereferencing
    
    cout << *ptr << '\n';

// modifying pointers
    *ptr = "Momos";
    cout<< food<< '\n';
    cout<< *ptr<< '\n';
    cout<< ptr<< '\n';
    return 0;
}