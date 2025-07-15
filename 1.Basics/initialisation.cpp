#include <iostream> 

using namespace std;

int main(){

    //braced initialization
    int number45;  //returns garbage value
    int number1{15};
    int number2{0x0f};
    int number3{}; //initializes to 0

    int number4{number1 + number2}; 

    cout << "Number 0 " << number45 << endl;
    cout << "Number 1 " << number1 << endl;
    cout << "Number 2 " <<number2 << endl;
    cout << "Number 3 " <<number3 << endl;
    cout << "Number 4 " <<number4 << endl;  

    // sizeof() function returns the size of the variable in bytes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of number1: " << sizeof(number1) << " bytes" << endl;
}