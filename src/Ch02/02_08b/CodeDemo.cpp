// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
#define AGE_SIZE 8
// #define FLOAT_SIZE 5

int main(){
    int age[AGE_SIZE];
    age[0] = 1;
    age[2] = 3;
    age[7] = 2;
    for (int i = 0; i < sizeof(age) / sizeof(int); i++) {
        std::cout << "i is "<< i << " and value = " << age[i] << std::endl << std::endl;
    }

    // C++ const
    const int FLOAT_SIZE = 4;
    const size_t FLOAT_SIZE_ANOTHER = 4;
    
    // float array
    float itemPrices[] = {1.4, 2.4f, 234.4, 23.5f};
    for (int i = 0; i < FLOAT_SIZE; i++) {

    }
    return (0);
}
