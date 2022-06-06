#include <iostream>

// Function addnums
int addnums( int first_param, int secont_param){

    int result = first_param + secont_param;

    return result;
}

int main(){

    int first_num {3};
    int second_num {4};

    std::cout << "First num: " << first_num << std::endl;
    std::cout << "Second num: " << second_num << std::endl;

    int sum = addnums(first_num, second_num); // calling funtion to add numbers

    std::cout << "Sum:" << sum << std::endl;

    sum = addnums(100, 35); // calling funtion to add numbers

    std::cout << "Sum:" << sum << std::endl;

    std::cout << "Sum 25 and 35: " << addnums(25, 35) << std::endl;

    return 0;
}