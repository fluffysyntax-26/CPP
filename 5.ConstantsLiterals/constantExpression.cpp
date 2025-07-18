#include <iostream> 

using namespace std; 

int main(){
    /*
    const expressions can be declared using the keyword constexpr, they evaluate expressions at runtime, saving time and increasing
    speed and efficiency, a constexpr keyword converts a normal variable to a constant varible

    static_assert can only be evaluated at runtime
    */
    constexpr int SOME_LIB_MAJOR_VERSION {1237};
	
	constexpr int eye_count {2};
	
	constexpr double PI {3.14};

    //eye_count = 4;
	
	std::cout << "eye count : " << eye_count << std::endl;
	std::cout << "PI : " << PI << std::endl;


	//int leg_count {2}; // Non constexpr
	                    // leg_count is not known at compile time
	//constexpr int arm_count{leg_count}; // Error 


	constexpr int room_count{10};
	constexpr int door_count{room_count};// OK
	
	const int table_count{5};
	constexpr int chair_count{ table_count * 5};// Works


   // static_assert( SOME_LIB_MAJOR_VERSION == 123);

   // int age = 5;
   // static_assert( age == 5);

    std::cout << "App doing its thing..." << std::endl;

}