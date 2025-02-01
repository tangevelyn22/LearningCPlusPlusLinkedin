// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    
    /* Note: 
        * use << std::flush << 
        * to make sure output of "Please enter" is completely sent
        * before waiting for user input (single words no space)
    */
    std::cout << "Please enter your username" <<std::endl << std::endl;
    std::cin >> str;
    std::cout << "You entered username : " << str << std::endl;
    return (0);
}
