#include <iostream>
#include <iomanip>

int main(){ 
    //endl - places a newline character at the end of the output stream
    std::cout << "Hello world" << std::endl;
    std::cout << "Hello Again!" << std::endl << std::endl; 
    
    // flush - flushes the output buffer to its final destination 
    std::cout << "This is a simple message....." << std::endl << std::flush; 

    // setw() - sets the width between the characters(right alignment, by default), 
    // works good with the justification tags (left, right, internal)
    short col_width = 20; 
    std::cout << std::left; // justification tag 
    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "LastName" << std::setw(col_width) << "Age" << std::endl; 
    std::cout << std::setw(col_width) << "Ishan" << std::setw(col_width) << "Neil" << std::setw(col_width) << "18" << std::endl; 
    std::cout << std::setw(col_width) << "Yuyutsu" << std::setw(col_width) << "Kashvi" << std::setw(col_width) << "21" << std::endl; 
    std::cout << std::setw(col_width) << "Vijhorta" << std::setw(col_width) << "Kashvi" << std::setw(col_width) << "20" << std::endl; 
    std::cout << std::setw(col_width) << "SriPriya" << std::setw(col_width) << "Reyla" << std::setw(col_width) << "20" << std::endl; 
    std::cout << std::setw(col_width) << "Alessandra" << std::setw(col_width) << "Castillia" << std::setw(col_width) << "20" << std::endl; 
    std::cout << std::setw(col_width) << "Ryan" << std::setw(col_width) << "Silvercliffe" << std::setw(col_width) << "20" << std::endl;
    
    std::cout << std::endl << std::endl; 

    //internal justification - keeps the sign to left and data to right
    std::cout << std::right; 
    std::cout << std::setw(col_width) << -123.45 << std::endl; 
    std::cout << std::internal; 
    std::cout << std::setw(col_width) << -123.45 << std::endl; 
    std::cout << std::endl << std::endl;


    //you can use characters to fill empty spaces using the setfill() function 
    std::cout << std::setfill('|'); 
    std::cout << std::setw(col_width) << "SriPriya" << std::setw(col_width) << "Reyla" << std::setw(col_width) << "20" << std::endl; 
    std::cout << std::setw(col_width) << "Alessandra" << std::setw(col_width) << "Castillia" << std::setw(col_width) << "20" << std::endl; 
    std::cout << std::setw(col_width) << "Ryan" << std::setw(col_width) << "Silvercliffe" << std::setw(col_width) << "20" << std::endl;
    
    std::cout << std::endl <<std::endl; 

    // switch between true/false and 0/1 using boolapha
    bool condition{true}; 
    bool other_condition{false}; 

    std::cout << "Conditon: " << condition << std::endl;
    std::cout << "Conditon: " << other_condition << std::endl << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Conditon: " << condition << std::endl;
    std::cout << "Conditon: " << other_condition << std::endl << std::endl;

    //switch back to 0/1
    std::cout << std::noboolalpha;
    std::cout << "Conditon: " << condition << std::endl;
    std::cout << "Conditon: " << other_condition << std::endl;
}