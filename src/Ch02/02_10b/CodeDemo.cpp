// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float floatingNum;
    int32_t thirtyTwoBitInteger;
    floatingNum = -7.345345345345345345345;
    thirtyTwoBitInteger = floatingNum;
    std::cout << "floatingNum = " << floatingNum << " thirtytwobitInt = " << thirtyTwoBitInteger << std::endl << std::endl;
    return (0);
}
