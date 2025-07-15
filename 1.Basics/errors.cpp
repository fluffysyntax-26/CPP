#include <iostream> 

int main(){
    //runtime error - division by zero 
    int a = 10;
    int b = 0;
    int result = a / b; // Runtime error: Division by zero

    //runtime error - array out of bounds
    int arr[5] = {1, 2, 3, 4, 5};
    int value = arr[10]; // Runtime error: Out of bounds access

    //Compile time error - missing semicolon
    std :: cout << "Hello World!" << std :: endl 

    return 0;
}