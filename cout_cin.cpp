#include <iostream>
#include <string> 

int main() {
    //Print command to cpp
    std::cout << "The print command in c++!" << std::endl;

    //Initioalizing variables
    int age;
    string name;

    //Inputing data from the terminal in cpp
    std::cout << "Enter your age:" << std::endl;
    std::cin >> age;

    std::cout << "Enter your name:" << std::endl;
    std::cin >> name;

    return 0;
}