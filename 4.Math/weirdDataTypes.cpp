#include <iostream> 

using namespace std; 

int main(){ 
    short int var1 {10}; // 2 bytes
	short int var2 {20};
	
	char var3 {40}; //1
	char var4 {50};
	
	std::cout << "size of var1 : " << sizeof(var1) << std::endl;
	std::cout << "size of var2 : " << sizeof(var2) << std::endl;
	std::cout << "size of var3 : " << sizeof(var3) << std::endl;
	std::cout << "size of var4 : " << sizeof(var4) << std::endl;
	
	auto result1 = var1 + var2 ;
	auto result2 = var3 + var4;
	
	std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4
	std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4
	
    
}

// smaller integral types do not directly support arithmetic operations like addition and subtraction. 
// This is due to processor design choices, where operations are optimized for larger data types.

/* 
compilers handle operations on these smaller types by implicitly converting them to larger types (like int) during calculations. 
This conversion is essential for enabling arithmetic operations even though the original types do not directly support them.
*/

// smaller integral types: less than or equal to 2 bytes