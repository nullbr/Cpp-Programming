#include <iostream>

int main(){

    int num0 = 15; // decimal
    int num1 = 017; // octal
    int num2 = 0x0F; // hexadecimal
    int num3 = 0b00001111; // binary

    std::cout << "Decimal: " << num0 << std::endl;
    std::cout << "Octal: " << num1 << std::endl;
    std::cout << "Hex: " << num2 << std::endl;
    std::cout << "Binary: " << num3 << std::endl;

    return 0;
}