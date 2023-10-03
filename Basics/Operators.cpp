#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Hello World!\n";
    // cout<< 100 + 50;
    // cout<< true;
    
    // string name ="Pabitra";
    // cout<< name.length();
    // cout<< name.size();
    // cout<< name[3];
    // name[0] = 'E';
    // cout<< name;
    // string firstName;
    // getline (cin, firstName);
    // cout << firstName;
    // return 0;

    // for (int i = 0; i<5; i++){
    //     cout<< i << "\n";
    // }
    // for (int i = 0; i<5; ++i){
    //     cout<< i << "\n";
    // } Throws error.
//     int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i : myNumbers) {
//   cout << i << "\n";
// }
//     for (int i =0; i<=1000; i++){
//         cout<< i<< "\n";
//     }
     for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
} 
    return 0;
}
