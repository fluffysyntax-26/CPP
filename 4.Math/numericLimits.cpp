#include <iostream> 
#include <limits> 


int main(){ 
    std::cout << "Range of short is: " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Range of int is: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Range of unsigned int is: " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Range of long is: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Range of float is: " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Range of double is: " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Range of long double is: " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;


    std::cout << std::endl; 

    std::cout << "Range of float(with lowest) is: " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl; 
    std::cout << "Range of double(with lowest) is: " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << std::endl; 
    std::cout << "Range of long double(with lowest) is: " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << std::endl; 

}