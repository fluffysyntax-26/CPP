#include <iostream>
// Function to add two numbers
using namespace std;

int add(int a, int b){
    return a + b; 
}

int main(){

   int firstNumber {10}; 
   int secondNumber {20};

   int sum = add(firstNumber, secondNumber);
   cout << "Sum = " << sum << endl;
}