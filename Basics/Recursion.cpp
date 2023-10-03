#include <iostream>
using namespace std;


int sum(int n);
int main(){
    cout << "Recursion in C++\n";
    int ans = sum(5);
    cout<< ans;
    return 0;

}

int sum(int n){
    if (n>0){
        return n + sum(n-1);
    }
    else{
        return 0;
    }
}