#include <iostream> 

using namespace std; 

int main(){ 

    int a = 10; 
    int b = 20; 

    //postfix incrementation - prints the value first and then increases by +1
    cout << "Postfix Incrementation: " << endl; 
    cout << a++ << endl; 
    cout << a << endl; 

    //postfix decrementation - prints the value first and then decresease the value by -1
    cout << endl << "Postfix Decrementation: " << endl; 
    cout << a-- << endl; 
    cout << a << endl; 

    //prefix incrementation - increases the value by one and then the value is printed
    cout << endl << "Prefix Incrementation: " << endl; 
    cout << b << endl; 
    cout << ++b << endl; 

    //prefix decrementation - decreases the value by one and then the value is printed
    cout << endl << "Prefix Decrementation: " << endl; 
    cout << b << endl; 
    cout << --b << endl; 
    
    return 0; 
}