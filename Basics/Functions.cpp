#include <iostream>
using namespace std;

void swapNums(int &x, int &y);
int add(int x, int y) {
    return (x+y);
}
int main(){
    cout<<"Functions in CPP\n";
    // cout<<add(23,32);
    int a = 2;
    int b = 3;
    swapNums(a,b);
    cout<< a << b <<'\n';
    cout<< "a: "<< &a << "b: " << &b << '\n';
}

void swapNums(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    cout<< &x<< ' '<< &y<< '\n';
}