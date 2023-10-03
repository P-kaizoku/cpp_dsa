#include <iostream>
using namespace std;

void print(int arr[]){
    for (int i : arr){
        cout<< i << ' ';
    }
}

   
int main(){

    int num[50];
    fill(num, num+50, 1);
    
    //  for (int n : num) {
    //     cout<< n<< " ";
    // }

    print(num);
    return 0;

}