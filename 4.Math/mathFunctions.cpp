#include <iostream> 
#include <cmath>


int main(){ 

    // floor and weight
    float weight = 7.876; 
    std::cout <<"Floor value: " << std::floor(weight) << std::endl; 
    std::cout <<"Ceil value: " << std::ceil(weight) << std::endl << std::endl; 

    // absolute function 
    float mass {-23.87678}; 
    std::cout <<"Absolute value of Mass: " << std::abs(mass) << std::endl << std::endl; 

    // exponential - f(x) = e^x
    double exponential = std::exp(10); 
    std::cout << "exponential of 10: " << exponential << std::endl << std::endl; 

    // power function (a^b)
    std::cout << "Power function (12^3): " << std::pow(12, 3) << std::endl; 
    std::cout << "Power function (34^78): " << std::pow(34, 78) << std::endl << std::endl; 

    // natural logarithm (base e)
    std::cout << "Natural Logarithm (78): " << std::log(12) << std::endl;

    // logarithm (base 10)
    std::cout << "Logarithm (10,000): " << std::log10(10000) << std::endl;

    // square root
    std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;

    //round. Halfway points are rounded away from 0. 2,5 is rounded to 5 for example
    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

}