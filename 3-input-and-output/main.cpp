#include <iostream>
#include <string>

int main(){
    // Print data
    /*
    std::cout << "Hello C++ 20 " << std::endl;

    int age{25};
    std::cout << "Age: " << age << std::endl;
    std::cerr << "Error message: Something is wrong" << std::endl;
    std::clog << "Log message: Something happened" << std::endl;
    */

    // Data input
    /*
    int age1;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;
    
    // std::cin >> name;
    // std::cin >> age1;

    std::cin >> name >> age1;    

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
    */

    // Data with spaces

    int age1;

    std::string full_name;

    std::cout << "Please type your name and age: " << std::endl;

    std::getline(std::cin, full_name); // get full name with spaces
    std::cin >> age1;

    std::cout << "Hello " << full_name << " you are " 
                << age1 << " years old!" << std::endl;
    
    return 0;
}