#include<iostream> 
#include<iomanip>

using namespace std; 

int main(){ 
    //show the sign and no sign using the showpos and noshowpos attribute
    int a = 10;
    int b = -10;

    cout << "Default (no flag):\n";
    cout << a << " " << b << "\n";  // Output: 10 -10

    cout << "\nWith showpos:\n";
    cout << showpos << a << " " << b << "\n";  // Output: +10 -10

    cout << "\nBack to default with noshowpos:\n";
    cout << noshowpos << a << " " << b << "\n";  // Output: 10 -10
    cout << endl << endl << endl; 

    //decimal, octal and hexadecimal
    int number = 4567654;

    cout << "Default (decimal): " << number << endl;

    cout << "Decimal (std::dec): " << dec << number << endl;
    cout << "Octal (std::oct): " << oct << number << endl;
    cout << "Hexadecimal (std::hex): " << hex << number << endl;

    // Show prefix (like 0x for hex, 0 for octal)
    cout << "\nWith base prefixes (using showbase):" << endl;
    cout << showbase;
    cout << "Octal: " << oct << number << endl;        // Outputs: 0377
    cout << "Hexadecimal: " << hex << number << endl;  // Outputs: 0xff

    return 0;

    // fixed - Prints floating-point numbers in fixed-point notation (e.g., 123.456000)
    // scientific - Prints floating-point numbers in scientific (exponential) notation (e.g., 1.234560e+02)

    double number = 123.456789;

    cout << "Default format:\n";
    cout << number << endl;  // May output: 123.457

    cout << "\nFixed format:\n";
    cout << fixed << setprecision(3) << number << endl;  // 123.457

    cout << "\nScientific format:\n";
    cout << scientific << setprecision(3) << number << endl;  // 1.235e+02

    return 0;
}