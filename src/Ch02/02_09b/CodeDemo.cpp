// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring> 


int main(){
    const size_t FIRST_LENGTH = 25;
    char firstArray[FIRST_LENGTH] = "howdy this is good";
    char secondArray[] = "another array";
    std::string stringFirst = "some strings";
    std::string stringSecond = "another string";

    // size of definition string is FIRST_LENGTH
    strncat(firstArray, secondArray, FIRST_LENGTH);
    // operator overloading
    std::cout << firstArray << std::endl;
    std::cout<< stringFirst + stringSecond << std::endl << std::endl;
    return (0);
}
