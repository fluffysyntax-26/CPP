#include <iostream> 

using namespace std;

int main(){

    int number1 = 15; 
    int number2 = 0x0f; 
    int number3 = 017;
    int number4 = 0b00001111; 

    cout << "Decimal: " << number1 << endl; 
    cout << "Hexadecimal: " << number2 << endl;
    cout << "Octal: " << number3 << endl;
    cout << "Binary: " << number4 << endl;
}