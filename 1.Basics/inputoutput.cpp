#include <iostream> 

using namespace std; 

int main(){

    string name; 
    string full_name; 
    int age; 

    cout << "Enter your name: " << endl; 
    cin >> name; // cannot capture strings with spaces 

    cin.ignore(); // ignore the newline character left by cin

    cout << "Enter your full name: " << endl;
    getline(cin, full_name); // can capture strings with spaces

    cout << "Enter your age: " << endl;
    cin >> age; 

    cout << "Hello " << full_name ; 
    cout << " You are " << age << " years old" << endl; 

    cerr << endl << "Error message: Something went wrong" << endl; //prints error messages
    clog << "Log message: This is a log message" << endl; // prints log messages

    return 0; 
}