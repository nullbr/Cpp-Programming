#include <iostream>

int main(){

    //Braced initializers
    /*
    //Variable may contain random garbage value . WARNING
    int elephant_count;
    
    int lion_count{};//Initializes to zero
    
    int dog_count {10}; //Initializes to 10
    
    int cat_count {15}; //Initializes to 15

    // Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };    


    // int narrowing_conversion {2.9}; cant do this

    std::cout << "elephant: " << elephant_count << std::endl;
    std::cout << "lion: " << lion_count << std::endl;
    std::cout << "dog: " << dog_count << std::endl;
    std::cout << "cat: " << cat_count << std::endl;
    std::cout << "domesticated: " << domesticated_animals << std::endl;
    std::cout << "narrowing conversion: " << narrowing_conversion << std::endl;
    */

    //Functional initialization
    /*
    //Variable may contain random garbage value . WARNING
    int elephant_count;
    
    int dog_count (10); //Initializes to 10
    
    int cat_count (15); //Initializes to 15

    // Can use expression as initializer
    int domesticated_animals ( dog_count + cat_count );   

    int narrowing_conversion (2.9); //Initializes to 2, NOT GOOD


    // int narrowing_conversion {2.9}; cant do this

    std::cout << "elephant: " << elephant_count << std::endl;
    std::cout << "dog: " << dog_count << std::endl;
    std::cout << "cat: " << cat_count << std::endl;
    std::cout << "domesticated: " << domesticated_animals << std::endl;
    std::cout << "narrowing conversion: " << narrowing_conversion << std::endl;
    */

    //Assignment notation
    
    //Variable may contain random garbage value . WARNING
    int elephant_count;
    
    int dog_count = 10; //Initializes to 10
    
    int cat_count = 15; //Initializes to 15

    // Can use expression as initializer
    int domesticated_animals = dog_count + cat_count;

    int narrowing_conversion = 2.9; //Initializes to 2, NOT GOOD


    // int narrowing_conversion {2.9}; cant do this

    std::cout << "elephant: " << elephant_count << std::endl;
    std::cout << "dog: " << dog_count << std::endl;
    std::cout << "cat: " << cat_count << std::endl;
    std::cout << "domesticated: " << domesticated_animals << std::endl;
    std::cout << "narrowing conversion: " << narrowing_conversion << std::endl;
    
    // check the size of variables
    std::cout << "size of int: " << sizeof(int) << std::endl;
    std::cout << "size of elephant: " << sizeof(elephant_count) << std::endl;
    std::cout << "size of dog: " << sizeof(dog_count) << std::endl;
    std::cout << "size of cat: " << sizeof(cat_count) << std::endl;
    std::cout << "size of domesticated: " << sizeof(domesticated_animals) << std::endl;
    std::cout << "size of narrowing conversion: " << sizeof(narrowing_conversion) << std::endl;

    return 0;
}