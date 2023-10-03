#include <iostream>
using namespace std;



   
int main(){

    int num[50];
    fill(num, num+50, 1);
    
     for (int n : num) {
        cout<< n<< " ";
    }

}