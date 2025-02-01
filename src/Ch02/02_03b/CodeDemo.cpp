// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int main(){
    bool exist = false;
    int numOfStudent = exist ? 5 : 10;
    std::cout << "The number of students: " << numOfStudent << std::endl;

    unsigned int positive;
    int b = 5;
    int a = 7;
    positive = b - a;
    std::cout << "a = " << a << " , b = " << b << std::endl; 
    std::cout << "b - a unsigned = " << positive << std::endl;
    std::cout << "which is 2^32 - 2" << std::endl;
    std::cout << " the binary number is the same" << std::endl;
    return (0);
}
