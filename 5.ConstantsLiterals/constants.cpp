#include <iostream> 

int main(){
    // Value of constants cannot be changed during runtime
    // Turns variable into read only
    // const variables have to be initialised

    const int age = 19; 

    // this will generate an error 
    // age++; 
    std::cout << age << std::endl; 

    // const is applied only to the varible, you override const by assigning the value to a different variable
    int duplicate = age; 
    duplicate++; 
    std::cout << duplicate; 
}