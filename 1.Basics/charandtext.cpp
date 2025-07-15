#include <iostream> 

using namespace std; 

int main(){

    char char1 {'A'}; // specify the character directly 
    char char2 {67}; // specify the ASCII value of the character

    cout << "Character 1 : " << char1 << endl;
    cout << "Character 2 : " << char2 << endl;

    char value = 'x'; 
    // char value = 120; // ASCII value of x
    cout << "Character : " << value << endl;

    // type cast manually to get the ASCII value of the character
    cout << "ASCII Value : " << static_cast<int>(value) << endl;

    // the other way around

    int asciiValue = 120;
    cout << "Character : " << static_cast<char>(asciiValue) << endl;
    cout << "ASCII Value : " << asciiValue << endl;
}